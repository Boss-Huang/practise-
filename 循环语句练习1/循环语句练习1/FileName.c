#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int ch = 0;
	int ret = 0;
	char password[20] = { 0 };
	printf("����������:>");
	scanf("%s", password);//�������룬�������password������
	//��������ʣ���'\n'
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ��(Y/N):>");
	ret = getchar();//Y/N
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("����ȷ��\n");
	}
	//printf("%d\n", '\n');
	return 0;
}