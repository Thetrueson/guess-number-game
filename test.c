#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <string.h>
int main(void)
{
	int a;
	int b;
	int c = (rand() % 100) + 1;
	srand((unsigned int)time(NULL));
	printf("��������Ϸ\n");
	printf("1��play\n");
	printf("0��exit\n");
angle:
	scanf("%d", &a);
	if (a == 1)
	{
		printf("��Ϸ��ʼ��(��Χ:1-100)\n");
		while (1)
		{
			printf("������:>");
			scanf("%d", &b);
			if (b < c)
			{
				printf("��С�ˣ�\n");
			}
			else if (b > c)
			{
				printf("�´��ˣ�\n");
			}
			else
			{
				printf("��ϲ�㣬�¶��ˣ�\n");
			evil:
				break;
			}
		}
	}
	else if (a == 0)
	{
		printf("�˳���Ϸ��\n");
		goto evil;
	}
	else
	{
		printf("����������������룡\n");
		goto angle;
	}
	return 0;
}