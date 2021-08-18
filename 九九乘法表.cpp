#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a;
	int b;
	int c;
	int line;

	for (line = 1; line <= 9; line++)
	{
		b = line;
		for (a = 1; a <= line; a++)
		{
			c = a * b;
			printf("%d*%d=%d ", a, b, c);
			if (c >= 10)
			{
				printf("");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}