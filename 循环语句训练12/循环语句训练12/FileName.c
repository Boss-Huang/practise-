#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	int sum = 1;
	int x = 0;
	for (n = 1; n <= 3; n++)
	{
		sum = sum * n;
		x = x + sum;
	}
	printf("x=%d\n", x);
	return 0;
}