#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		//�����жϵĹ���
		//1���Գ���
		//����2������i-1
		int j = 0;
		//sqrt-��ƽ������ѧ�⺯��
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}