#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int sz = 0;
	i = sizeof(arr);
	//sz = sizeof(arr[0]);
	printf("%d\n", i);
	//printf("%d\n", sz);
	return 0;
}