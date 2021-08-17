#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int ia;
	int ib;
	int ic;
	int imax;

	printf("plz write three different numbers\n");
	scanf("%d\n", &ia);
	scanf("%d\n", &ib);
	scanf("%d", &ic);

	if (ia > ib)
	{
		imax = ia;
	}
	else if (ia == ib)
	{
		printf("THE SAME NUMBERS!");
	}
	else
	{
		imax = ib;
	}

	if (ic > imax)
	{
		printf("the max number is %d", ic);
	}
	else if (imax == ic)
	{
		printf("THE SAME NUMBERS!");
	}
	else
	{
		printf("the max number is %d", imax);
	}

	return 0;
}
