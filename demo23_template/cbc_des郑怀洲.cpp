///DES�㷨����
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

#define maxn 512
/********************************��������************************/
void init();///��ʼ������ 
void change(char s[], int flag);//ת��Ϊ������,һ�ֽ����FF��8bit
void fen();///��64bit������minip��Ϊ����������
void ip_permutation();//ip�û�
void EK();//E����չ
void SY(int k);//���S��ѹ��
void PHe();//P���û�
void ni_permutation();//���ʼ�û���
void PC_1zhi();//�û�pc1�м�ѭ����λ
void PC_2zhi();//16���û���pc2�еõ�����Կ
void two2_To_16();//��������ת����16��������
/********************************��ʼ��������************************/
static char mingwen[maxn], miwen[maxn], secret_key[maxn];
//��������� ���� ��Կ
static int plaintext[maxn], secret_keybit[maxn], mibit[maxn], zhongbit[maxn];///���ģ����ģ���Կ�Ķ�����
static int mip[maxn], rr[maxn], SYa[maxn], er[10];//mip:����ip��ʼ�û��õ�  rr:E����չ��õ�  SYa:s��ѹ���õ�  er:s�е�ת��������ʹ��
static int Left[maxn], Right[maxn];
static int keypc1[maxn], keypc2[maxn], c[maxn], d[maxn];//c,d��Կ�û��õ�
static int subkey[16][maxn];//����������Կ
static int LL[17][64], RR[17][64], cnt;
static int xz_flag, xz[] = { 1,1,2,2,2,2,2,2,1,2,2,2,2,2,2,1 }; ///ѭ������λ,xz_flag���������ǵڼ�����λ
int IP[] =//ip�û���
{
    58,50,42,34,26,18,10,2,
    60,52,44,36,28,20,12,4,
    62,54,46,38,30,22,14,6,
    64,56,48,40,32,24,16,8,
    57,49,41,33,25,17, 9,1,
    59,51,43,35,27,19,11,3,
    61,53,45,37,29,21,13,5,
    63,55,47,39,31,23,15,7,
};
int E[] =//E��
{
    32,1,2,3,4,5,
    4,5,6,7,8,9,
    8,9,10,11,12,13,
    12,13,14,15,16,17,
    16,17,18,19,20,21,
    20,21,22,23,24,25,
    24,25,26,27,28,29,
    28,29,30,31,32,1,
};
int P[] =//p���û���
{
    16,7,20,21,29,12,28,17,1,15,23,26,5,18,31,10,
    2,8,24,14,32,27,3,9,19,13,30,6,22,11,4,25,
};
int PC_1[] =//��Կ�û�PC_1��
{
    57,49,41,33,25,17,9,1,58,50,42,34,26,18,
    10,2,59,51,43,35,27,19,11,3,60,52,44,36,
    63,55,47,39,31,23,15,7,62,54,46,38,30,22,
    14,6,61,53,45,37,29,21,13,5,28,20,12,4,
};
int PC_2[] =//��Կ�û�PC_2��
{
    14,17,11,24,1,5,3,28,15,6,21,10,
    23,19,12,4,26,8,16,7,27,20,13,2,
    41,52,31,37,47,55,30,40,51,45,33,48,
    44,49,39,56,34,53,46,42,50,36,29,32
};
int S[8][4][16] =//8��s��
{
    //1
    14,4,13,1,2,15,11,8,3,10,6,12,5,9,0,7,
    0,15,7,4,14,2,13,1,10,6,12,11,9,5,3,8,
    4,1,14,8,13,6,2,11,15,12,9,7,3,10,5,0,
    15,12,8,2,4,9,1,7,5,11,3,14,10,0,6,13,
    //2
    15,1,8,14,6,11,3,4,9,7,2,13,12,0,5,10,
    3,13,4,7,15,2,8,14,12,0,1,10,6,9,11,5,
    0,14,7,11,10,4,13,1,5,8,12,6,9,3,2,15,
    13,8,10,1,3,15,4,2,11,6,7,12,0,5,14,9,
    //3
    10,0,9,14,6,3,15,5,1,13,12,7,11,4,2,8,
    13,7,0,9,3,4,6,10,2,8,5,14,12,11,15,1,
    13,6,4,9,8,15,3,0,11,1,2,12,5,10,14,7,
    1,10,13,0,6,9,8,7,4,15,14,3,11,5,2,12,
    //4
    7,13,14,3,0,6,9,10,1,2,8,5,11,12,4,15,
    13,8,11,5,6,15,0,3,4,7,2,12,1,10,14,9,
    10,6,9,0,12,11,7,13,15,1,3,14,5,2,8,4,
    3,15,0,6,10,1,13,8,9,4,5,11,12,7,2,14,
    //5
    2,12,4,1,7,10,11,6,8,5,3,15,13,0,14,9,
    14,11,2,12,4,7,13,1,5,0,15,10,3,9,8,6,
    4,2,1,11,10,13,7,8,15,9,12,5,6,3,0,14,
    11,8,12,7,1,14,2,13,6,15,0,9,10,4,5,3,
    //6
    12,1,10,15,9,2,6,8,0,13,3,4,14,7,5,11,
    10,15,4,2,7,12,9,5,6,1,13,14,0,11,3,8,
    9,14,15,5,2,8,12,3,7,0,4,10,1,13,11,6,
    4,3,2,12,9,5,15,10,11,14,1,7,6,0,8,13,
    //7
    4,11,2,14,15,0,8,13,3,12,9,7,5,10,6,1,
    13,0,11,7,4,9,1,10,14,3,5,12,2,15,8,6,
    1,4,11,13,12,3,7,14,10,15,6,8,0,5,9,2,
    6,11,13,8,1,4,10,7,9,5,0,15,14,2,3,12,
    //8
    13,2,8,4,6,15,11,1,10,9,3,14,5,0,12,7,
    1,15,13,8,10,3,7,4,12,5,6,11,0,14,9,2,
    7,11,4,1,9,12,14,2,0,6,10,13,15,3,5,8,
    2,1,14,7,4,10,8,13,15,12,9,0,3,5,6,11,
};
int IP_1[] =//���ʼ�û���
{
    40,8,48,16,56,24,64,32,
    39,7,47,15,55,23,63,31,
    38,6,46,14,54,22,62,30,
    37,5,45,13,53,21,61,29,
    36,4,44,12,52,20,60,28,
    35,3,43,11,51,19,59,27,
    34,2,42,10,50,18,58,26,
    33,1,41,9,49,17,57,25,
};
/********************************������************************/
int main()
{
    printf("CBCģʽ:\n");
    char iv[9] = "12345678";
    char key_tmp[maxn];
    printf("������8λ����:");
    /*scanf("%s", mingwen);*/
    cin >> mingwen;
    
    printf("������8λ��Կ:");
    /*scanf_s("%s", key_tmp);*/
    cin >> key_tmp;
    for (int k = 0; k < 8; k++)
    {
        mingwen[k] ^= iv[k];
    }
    change(mingwen, 1);
    memcpy(secret_key, key_tmp, 8);
    change(secret_key, 2);
    //des�����㷨 
    PC_2zhi();///����Կ����
    ip_permutation();///ip�û�
    for (int i = 0; i < 16; i++)///һ���ķ�ʽһ��ѭ��15��
    {
        EK();///E����չ
        SY(i);///S��ѹ��
        PHe();///p���û�
    }
    for (int i = 0; i < 32; i++)
    {
        mip[32 + i] = LL[16][i];
        mip[i] = RR[16][i];
    }
    ni_permutation();//IP���û�
    two2_To_16();
    printf("�������,�õ�ʮ����������:\n");
    printf("%s\n", miwen);
    return 0;
}
/********************************�Ӻ����Ķ���************************/
void init()///��ʼ��
{
    xz_flag = cnt = 0;
    memset(c, 0, sizeof(c));
    memset(d, 0, sizeof(d));
    memset(LL, 0, sizeof(LL));
    memset(RR, 0, sizeof(RR));
    memset(mip, 0, sizeof(mip));
    memset(SYa, 0, sizeof(SYa));
    memset(subkey, 0, sizeof(subkey));
    memset(Left, 0, sizeof(Left));
    memset(Right, 0, sizeof(Right));
    memset(secret_key, 0, sizeof(secret_key));
    memset(mingwen, 0, sizeof(mingwen));
    memset(mingwen, 0, sizeof(mingwen));
    memset(keypc1, 0, sizeof(keypc1));
    memset(keypc2, 0, sizeof(keypc2));
    memset(secret_keybit, 0, sizeof(secret_keybit));
}
void change(char s[], int flag)//ת��Ϊ������,һ�ֽ����FF��8bit
{
    int l = 0;
    for (int i = 0; i < 8; i++)
    {
        int n = s[i], time = 0;
        memset(zhongbit, 0, sizeof(zhongbit));
        while (n != 0)
        {
            zhongbit[time++] = n % 2;//����֮��Ҫ����˳��
            n /= 2;
        }
        if (flag == 1)//����
        {
            for (int j = 7; j >= 0; j--)//����,�ߵ�λ����
                plaintext[l++] = zhongbit[j];
        }
        else if (flag == 2)//��Կ
        {
            for (int j = 7; j >= 0; j--)
                secret_keybit[l++] = zhongbit[j];
        }
    }
}
void fen()///��64bit������minip��Ϊ����������
{
    for (int i = 0; i < 32; i++)
    {
        Left[i] = mip[i];
        Right[i] = mip[32 + i];
    }
    for (int i = 0; i < 32; i++)
    {
        LL[cnt][i] = Left[i];
        RR[cnt][i] = Right[i];
    }
    cnt++;
}
void ip_permutation()//ip�û�
{
    for (int i = 0; i < 64; i++)
        mip[i] = plaintext[IP[i] - 1];//���ģ��±��0��ʼ
    fen();
    memset(plaintext, 0, sizeof(plaintext));
}
void EK()//E����չ
{
    memset(rr, 0, sizeof(rr));
    for (int i = 0; i < 48; i++)
        rr[i] = Right[E[i] - 1];
}
void SY(int k)//���S��ѹ��
{
    for (int i = 0; i < 48; i++)
        rr[i] ^= subkey[k][i];
    int c = 0;
    for (int i = 0; i < 48; i++)
    {
        if ((i + 1) % 6 == 0)//�����¸�s��
        {
            int w = (i + 1) / 6, h, l;//�ĸ���,��һ����һ��
            h = rr[i - 5] * 2 + rr[i] * 1;
            l = rr[i - 4] * 8 + rr[i - 3] * 4 + rr[i - 2] * 2 + rr[i - 1] * 1;
            int ans = S[w - 1][h][l];
            int tt = 0;
            memset(er, 0, sizeof(er));
            while (ans)
            {
                er[tt++] = ans % 2;
                ans /= 2;
            }
            for (int j = 3; j >= 0; j--)
                SYa[c++] = er[j];
        }
    }
}
void PHe()//P���û�
{
    for (int i = 0; i < 32; i++)
        Right[i] = Left[i] ^ SYa[P[i] - 1];
    for (int i = 0; i < 32; i++)
        Left[i] = mip[32 + i];
    for (int i = 0; i < 32; i++)
    {
        mip[i] = Left[i];
        mip[32 + i] = Right[i];
    }
    fen();//��Ϊ����������
}
void ni_permutation()//���ʼ�û���
{
    for (int i = 0; i < 64; i++)
        plaintext[i] = mip[IP_1[i] - 1];
}
void PC_1zhi()//�û�pc1�м�ѭ����λ
{
    if (xz_flag == 0)//ֻ�е��ǵ�һ�ε�ʱ��Ż����PC�û���1
    {
        for (int i = 0; i < 56; i++)
            keypc1[i] = secret_keybit[PC_1[i] - 1];//��Կ���±��0��ʼ
    }
    for (int i = 0; i < 28; i++) //��56λ����Կ��Ϊ����28λ����,ѭ����λ
    {
        int ans = i + xz[xz_flag];//16��ѭ������
        if (ans > 27)
            ans -= 28;
        c[i] = keypc1[ans];///�õ�ǰ�벿��
        d[i] = keypc1[28 + ans];///�õ���벿��
    }
    for (int i = 0; i < 28; i++)
    {
        keypc1[i] = c[i];
        keypc1[28 + i] = d[i];
    }
    xz_flag++;
}
void PC_2zhi()//16���û���pc2�еõ�����Կ
{
    for (int k = 0; k < 16; k++)//16������Կ
    {
        PC_1zhi();
        for (int i = 0; i < 48; i++)
            subkey[k][i] = keypc1[PC_2[i] - 1];//������������Կ������
    }
}
void two2_To_16()//��������ת����16��������
{
    int ans = 0, l = 0;
    for (int i = 0; i < 64; i++)
    {
        if ((i + 1) % 4 == 0)
        {
            ans = plaintext[i - 3] * 8 + plaintext[i - 2] * 4 + plaintext[i - 1] * 2 + plaintext[i];//0~15
            if (ans > 9)
                miwen[l++] = 'a' + ans - 10;//ABCDF
            else
                miwen[l++] = ans + '0';//0~9
            ans = 0;
        }
    }
}
