#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a = 10;
	char b[30]="I LOVE YOU";
	char c[30];
	float d = 1.23f;
	float e;
	
	puts("please write a string:");
	scanf("%s", c,30);
	e = a * d;
	printf("the int is:%d\n", a);
	printf("the bstring is:%s\n", b, 30);
	printf("the cstring is:%s\n", c, 30);
	printf("the answer of the multiply is:%f", e);
	return 0;
} 