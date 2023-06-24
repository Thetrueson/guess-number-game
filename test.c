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
	printf("猜数字游戏\n");
	printf("1、play\n");
	printf("0、exit\n");
angle:
	scanf("%d", &a);
	if (a == 1)
	{
		printf("游戏开始！(范围:1-100)\n");
		while (1)
		{
			printf("请输入:>");
			scanf("%d", &b);
			if (b < c)
			{
				printf("猜小了！\n");
			}
			else if (b > c)
			{
				printf("猜大了！\n");
			}
			else
			{
				printf("恭喜你，猜对了！\n");
			evil:
				break;
			}
		}
	}
	else if (a == 0)
	{
		printf("退出游戏！\n");
		goto evil;
	}
	else
	{
		printf("输入错误，请重新输入！\n");
		goto angle;
	}
	return 0;
}