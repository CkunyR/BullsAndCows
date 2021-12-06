#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("***************************************\n");
	printf("****      1.Play      0.Exit       ****\n");
	printf("***************************************\n");
}
void game()
{
	//生成随机数
	int ret = 0;
	int guess = 0;
	//拿时间戳来设置生成随机数的起点
	srand((unsigned int)time(NULL));
	//时间戳---当前时间减去计算机的起始时间（1970.1.1.0：00：00）=      (s)
	ret = rand()%100+1;
	//printf("%d\n", ret);
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}
