#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	while (10 >= i)
	{
		i++;
		if (5 == i)
			continue;
		printf("%d ", i);

	}
	return 0;
}