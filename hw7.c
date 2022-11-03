#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };
	int * num1 = arr1;
	int * num2 = arr2;
	int swt = 0, i;
	
	printf("arr1: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr1[i]);

	printf("\narr2: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr2[i]);

	for (i = 0; i < 6; i++)
	{
		swt = *(num1);
		*(num1++) = *(num2);
		*(num2++) = swt;
		
	}

	printf("\n\nafter swap \n");
	printf("arr1: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr1[i]);
	printf("\narr2: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr2[i]);
	return 0;
}