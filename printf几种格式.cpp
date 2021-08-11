#include<stdio.h>

int main()
{
	int a = 10;
	char b[10] = "a";   /*  定义字符串时一定要加字符串长度！！！  */
	float c = 1.234f;

	printf("the int is %d\n",a);     /*  \n换行不要忘记  */
	printf("the char is %c\n",b,10);
	printf("the float is %f\n",c);
	printf("the string is %s\n","I LOVE YOU");

	return 0;
}