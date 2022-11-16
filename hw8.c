#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void deviation(double* ptr, double ave)
{
	int i;
	double dev = 0;
	for (i = 0; i < 5; i++)
		dev += pow(ptr[i] - ave, 2.0);
		
	dev /= 5;
	dev = sqrt(dev);
	printf("Standard Deviation = %.3f", dev);
}

int main(void)
{
	double arr[5];
	double ave = 0;
	int i;
	
	printf("Enter 5 real numbers: ");
	scanf("%lf %lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	for (i = 0; i < 5; i++)
		ave += arr[i];
	ave /= 5;
	deviation(&arr, ave);
	return 0;
}

