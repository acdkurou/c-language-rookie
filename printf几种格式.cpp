#include<stdio.h>

int main()
{
	int a = 10;
	char b[10] = "a";   /*  �����ַ���ʱһ��Ҫ���ַ������ȣ�����  */
	float c = 1.234f;

	printf("the int is %d\n",a);     /*  \n���в�Ҫ����  */
	printf("the char is %c\n",b,10);
	printf("the float is %f\n",c);
	printf("the string is %s\n","I LOVE YOU");

	return 0;
}