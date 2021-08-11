#include<stdio.h>
int main()
{
	char a[10];                                                   /*定义字符串*/
	int b=1;                                                      /*定义整型*/
	gets_s(a, 10);                                                /*输入字符串*/
	printf("the character is %s,then the integer is %d", a, b);   /*格式输出函数*/
	return 0;

}