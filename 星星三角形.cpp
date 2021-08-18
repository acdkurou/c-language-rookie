#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a,b,c,d,i,j;

	printf("plz enter a row number:");
	scanf("%d", &a);
	printf("\n");

	b = 2 * a - 1;
	c = a - 1;
	
	for (d = 1; d <= a; d++)
	{
		i = c+1-d;
		j = d-1;
		for (; i > 0; i--)
		{
			printf(" ");
		}
		for (; j > 0; j--)
		{
			printf("*");
		}
		printf("*");
		
		i = c + 1 - d;
		j = d - 1;
		for (; j > 0; j--)
		{
			printf("*");
		}
		for (; i > 0; i--)
		{
			printf(" ");
		}
		printf("\n");
	}


	return 0;
}