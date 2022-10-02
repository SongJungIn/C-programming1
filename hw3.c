#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int j;
	int k;
	int i;

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5-i; j ++)
		{
			printf(" ");
		}
		for (k = 1; k <= 2*i-1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
