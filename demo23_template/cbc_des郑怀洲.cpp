///DES算法加密
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

#define maxn 512
/********************************函数声明************************/
void init();///初始化函数 
void change(char s[], int flag);//转换为二进制,一字节最大FF，8bit
void fen();///将64bit的明文minip分为左右两部分
void ip_permutation();//ip置换
void EK();//E盒扩展
void SY(int k);//异或及S盒压缩
void PHe();//P盒置换
void ni_permutation();//逆初始置换表
void PC_1zhi();//置换pc1盒及循环移位
void PC_2zhi();//16轮置换，pc2盒得到子密钥
void two2_To_16();//将二进制转换成16进制密文
/********************************初始变量定义************************/
static char mingwen[maxn], miwen[maxn], secret_key[maxn];
//输入的明文 密文 密钥
static int plaintext[maxn], secret_keybit[maxn], mibit[maxn], zhongbit[maxn];///明文，密文，密钥的二进制
static int mip[maxn], rr[maxn], SYa[maxn], er[10];//mip:经过ip初始置换得到  rr:E盒扩展后得到  SYa:s盒压缩得到  er:s盒的转换过程中使用
static int Left[maxn], Right[maxn];
static int keypc1[maxn], keypc2[maxn], c[maxn], d[maxn];//c,d密钥置换得到
static int subkey[16][maxn];//产生的子密钥
static int LL[17][64], RR[17][64], cnt;
static int xz_flag, xz[] = { 1,1,2,2,2,2,2,2,1,2,2,2,2,2,2,1 }; ///循环左移位,xz_flag用来计算是第几次移位
int IP[] =//ip置换表
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
int E[] =//E盒
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
int P[] =//p盒置换表
{
    16,7,20,21,29,12,28,17,1,15,23,26,5,18,31,10,
    2,8,24,14,32,27,3,9,19,13,30,6,22,11,4,25,
};
int PC_1[] =//密钥置换PC_1盒
{
    57,49,41,33,25,17,9,1,58,50,42,34,26,18,
    10,2,59,51,43,35,27,19,11,3,60,52,44,36,
    63,55,47,39,31,23,15,7,62,54,46,38,30,22,
    14,6,61,53,45,37,29,21,13,5,28,20,12,4,
};
int PC_2[] =//密钥置换PC_2盒
{
    14,17,11,24,1,5,3,28,15,6,21,10,
    23,19,12,4,26,8,16,7,27,20,13,2,
    41,52,31,37,47,55,30,40,51,45,33,48,
    44,49,39,56,34,53,46,42,50,36,29,32
};
int S[8][4][16] =//8个s盒
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
int IP_1[] =//逆初始置换表
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
/********************************主函数************************/
int main()
{
    printf("CBC模式:\n");
    char iv[9] = "12345678";
    char key_tmp[maxn];
    printf("请输入8位明文:");
    /*scanf("%s", mingwen);*/
    cin >> mingwen;
    
    printf("请输入8位密钥:");
    /*scanf_s("%s", key_tmp);*/
    cin >> key_tmp;
    for (int k = 0; k < 8; k++)
    {
        mingwen[k] ^= iv[k];
    }
    change(mingwen, 1);
    memcpy(secret_key, key_tmp, 8);
    change(secret_key, 2);
    //des加密算法 
    PC_2zhi();///子密钥产生
    ip_permutation();///ip置换
    for (int i = 0; i < 16; i++)///一样的方式一共循环15次
    {
        EK();///E盒扩展
        SY(i);///S盒压缩
        PHe();///p盒置换
    }
    for (int i = 0; i < 32; i++)
    {
        mip[32 + i] = LL[16][i];
        mip[i] = RR[16][i];
    }
    ni_permutation();//IP逆置换
    two2_To_16();
    printf("加密完成,得到十六进制密文:\n");
    printf("%s\n", miwen);
    return 0;
}
/********************************子函数的定义************************/
void init()///初始化
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
void change(char s[], int flag)//转换为二进制,一字节最大FF，8bit
{
    int l = 0;
    for (int i = 0; i < 8; i++)
    {
        int n = s[i], time = 0;
        memset(zhongbit, 0, sizeof(zhongbit));
        while (n != 0)
        {
            zhongbit[time++] = n % 2;//倒序，之后要调整顺序
            n /= 2;
        }
        if (flag == 1)//明文
        {
            for (int j = 7; j >= 0; j--)//倒序,高地位互换
                plaintext[l++] = zhongbit[j];
        }
        else if (flag == 2)//秘钥
        {
            for (int j = 7; j >= 0; j--)
                secret_keybit[l++] = zhongbit[j];
        }
    }
}
void fen()///将64bit的明文minip分为左右两部分
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
void ip_permutation()//ip置换
{
    for (int i = 0; i < 64; i++)
        mip[i] = plaintext[IP[i] - 1];//明文，下标从0开始
    fen();
    memset(plaintext, 0, sizeof(plaintext));
}
void EK()//E盒扩展
{
    memset(rr, 0, sizeof(rr));
    for (int i = 0; i < 48; i++)
        rr[i] = Right[E[i] - 1];
}
void SY(int k)//异或及S盒压缩
{
    for (int i = 0; i < 48; i++)
        rr[i] ^= subkey[k][i];
    int c = 0;
    for (int i = 0; i < 48; i++)
    {
        if ((i + 1) % 6 == 0)//进入下个s盒
        {
            int w = (i + 1) / 6, h, l;//哪个盒,哪一行那一列
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
void PHe()//P盒置换
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
    fen();//分为左右两部分
}
void ni_permutation()//逆初始置换表
{
    for (int i = 0; i < 64; i++)
        plaintext[i] = mip[IP_1[i] - 1];
}
void PC_1zhi()//置换pc1盒及循环移位
{
    if (xz_flag == 0)//只有当是第一次的时候才会进行PC置换盒1
    {
        for (int i = 0; i < 56; i++)
            keypc1[i] = secret_keybit[PC_1[i] - 1];//秘钥，下标从0开始
    }
    for (int i = 0; i < 28; i++) //将56位的密钥分为两个28位的组,循环移位
    {
        int ans = i + xz[xz_flag];//16次循环左移
        if (ans > 27)
            ans -= 28;
        c[i] = keypc1[ans];///得到前半部分
        d[i] = keypc1[28 + ans];///得到后半部分
    }
    for (int i = 0; i < 28; i++)
    {
        keypc1[i] = c[i];
        keypc1[28 + i] = d[i];
    }
    xz_flag++;
}
void PC_2zhi()//16轮置换，pc2盒得到子密钥
{
    for (int k = 0; k < 16; k++)//16轮子秘钥
    {
        PC_1zhi();
        for (int i = 0; i < 48; i++)
            subkey[k][i] = keypc1[PC_2[i] - 1];//将产生的子密钥存下来
    }
}
void two2_To_16()//将二进制转换成16进制密文
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
