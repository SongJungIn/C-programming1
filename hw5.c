#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Binary(int n) 
{
	if (n == 1) 
		printf("%d", n);
	else 
	{
		Binary(n / 2);
		printf("%d", n % 2);
	}
}

int main()
{
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	Binary(num);
	return 0;
}