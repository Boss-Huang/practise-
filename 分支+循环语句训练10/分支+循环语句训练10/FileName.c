#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	double sum = 0.0;
	for (i = 1; i <= 100; i++)
	{
		sum += 1.0 / i;
	}
	printf("%lf\n", sum);
	return 0;
}