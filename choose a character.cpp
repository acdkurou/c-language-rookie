#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a;
	int b;
	printf("welcome to this rpg!please choose a character!\n");
	printf("1.Deriven                                 2.Natoraky\n");
	printf("  wizard                                    warrior\n");
	printf("\n");
	scanf("%d",&a);
	switch (a)
	{
	case 1:
			printf("deriven");
			break;
	case 2:
		    printf("Natoraky");
			break;
	default:
		    printf("???");
			break;
	}

	return 0;
}