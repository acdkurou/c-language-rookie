#include<stdio.h>

int main()
{
	int str1, str2;
	puts("please enter two numbers:");
	scanf_s("%d%d", &str1, &str2);
	printf("the first number is:%d\n",str1);
	printf("the second number is:%d\n",str2);
	return 0;
}