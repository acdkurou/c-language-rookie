#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a;
	printf("please enter a zero\n");
	scanf("%d", &a);
	
	if (a == 0) printf("%d\n", a);
	else  printf("this is not zero,you idiot!\n");
	printf("calculation is done.\n");
	return 0;
}
