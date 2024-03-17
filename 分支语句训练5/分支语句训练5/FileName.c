#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
		else	//这个else和第2个if匹配
	 //else和离他最近的未匹配的if匹配
			printf("haha\n");
	return 0;
}