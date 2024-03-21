#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int sum = 1;
	int x = 0;
	for (n = 1; n <= 3; n++)
	{
		for (i = 1, sum = 1; i <= n; i++)
		{
			sum = sum * i;
		}
		x = sum + x;
	}
	printf("x=%d\n", x);
	return 0;
}