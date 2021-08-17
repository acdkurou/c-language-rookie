#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int big;//big为输入的被分解质因数的大数
    int mul;//mul为质因数
    int sig;//sig为求余数
    int div;//div为除得的数
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