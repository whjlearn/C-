#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game()
{
	//游戏相关的函数
	char board[ROW][COL];//存储数据,记录
	
 //初始化棋盘，空格初始化
	InitBoard(board,ROW,COL);//初始化棋盘的函数,不初始化是随机值？
	
//打印棋盘
	DisplayBoard(board,ROW,COL);
	char ret = 0;//接收游戏状态
	while (1)
	{
		//玩家走
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		
		//判断玩家是否赢得比赛
		 ret = IsWin(board, ROW, COL);
			if(ret != 'c')
				break;
		//电脑走
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢得比赛
		 ret = IsWin(board, ROW, COL);
			if(ret != 'c')
				break;
	}
	if (ret=='*')
	{
		printf("玩家赢了\n");

	}
	else if (ret=='#')
	{
		printf("电脑赢了\n");
		
	}
	else
	{
		printf("平局\n");
		
	}
	DisplayBoard(board, ROW, COL);
}
void  menu()
{
	printf("***************************\n");
	printf("********  1  play  ********\n");
	printf("********  0  exit  ********\n");
	printf("***************************\n");

}
int main()
{
	int input;
	srand((unsigned int)time(NULL));
	
	do{ 
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入有误，请重新输入\n");
			break;
		}
		

	} while (input);
	return 0;
}