#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void game()
{
	char ret;
	char board[ROW][COL] = { 0 };

	//初始化棋盘数据
	InitBoard(board,ROW, COL);
	
	//打印棋盘
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		//玩家下棋
		player_move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

		//判断输赢
		 ret = is_win(board, ROW, COL);
		if (ret != 'C')//判断输赢的函数不等于C 就是不继续 游戏结束 跳出下棋循环循环
			break;

		//电脑下棋
		computer_move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

		//判断输赢
		ret = is_win(board, ROW, COL);
		if (ret != 'C')//判断输赢的函数不等于C 就是不继续 游戏结束 跳出下棋循环
			break;
	}


	//走到这里  判断结果
	if (ret=='*')
	{
		printf("玩家赢\n");
	}
	else if(ret=='#')
	{
		printf("电脑赢\n");

	}
	else
	{
		printf("平局\n");

	}

	DisplayBoard(board, ROW, COL);


}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
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
			printf("输入错误，请重新选择\n");
			break;
		}

	} while (input);
}
int main()
{
	test();
	
	return 0;
}