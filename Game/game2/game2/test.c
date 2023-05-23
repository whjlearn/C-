#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void game()
{

	char mine[ROWS][COLS] = { 0 };//'0'
	char show[ROWS][COLS] = { 0 };//'*'

	//初始化棋盘
	init_board(mine, ROWS, COLS,'0');
	init_board(show, ROWS, COLS,'*');
	//布置雷
	set_mine(mine, ROW, COL);
	//打印棋盘
	//show_board(mine, ROW, COL);//只显示 中间的9*9
	
	show_board(show,ROW,COL);//只显示 中间的9*9
	//排查雷
	find_mine(mine,show,ROW,COL);
	
	//show_board(show, ROW, COL);//只显示 中间的9*9

}


void test()
{
	srand((unsigned int)time(NULL));
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
			printf("选择错误，请重新选择\n");
			break;
		}

	} while (input);
}


int main()
{
	test();
	
}