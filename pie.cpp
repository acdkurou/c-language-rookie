#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	float pie = 3.14f;

	float fradius;
	puts("enter the radius:");
	scanf("%f", &fradius);
	float farea = fradius * fradius * pie;
	printf("the area is:%2f/n", farea);
	return 0;
}