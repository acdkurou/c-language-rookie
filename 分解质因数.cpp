#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int big;//bigΪ����ı��ֽ��������Ĵ���
    int mul;//mulΪ������
    int sig;//sigΪ������
    int div;//divΪ���õ���
    printf("plz enter a big number:");
    scanf("%d", &big);
    mul = 1;

    do
    {
        mul++;
        sig = big % mul;
    } 
    while ((sig != 0) & (mul < big));
    
    if (mul < big)
    {
        div = big / mul;
        printf("%d=%d*%d", big, mul, div);
    }
    else
    {
        printf("it's a prime.");
    }
    return 0;
}