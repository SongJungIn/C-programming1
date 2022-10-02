#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num;
	int i;
	int k = 0;

	printf("Please enter a number: ");
	scanf("%d", &num);
	for (i = 2; i < num; i++)
		if (num % i == 0)
			k = 1;
	if (k == 1)
		printf("It is not a prime number.");
	else
		printf("It is a prime number.");

	return 0;
}