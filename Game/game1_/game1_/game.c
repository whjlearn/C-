#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//菜单
void menu()
{
	printf("******  三子棋  ******\n");
	printf("**********************\n");
	printf("***      1.play   ****\n");
	printf("***      0.exit   ****\n");
	printf("**********************\n");

}
//初始化
void InitBoard(char board[ROW][COL], int row, int col)
{
	int j = 0;
	int  i = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//打印棋盘
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; ++i)
//	{
//
//		for ( j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);
//			
//			if(j<col-1)
//				printf("|");
//
//		}
//		printf("\n");
//		
//		if (i<row-1)
//		{
//			for (j = 0; j < col; ++j)
//			{
//				printf("---");
//				if (j<col-1)
//					printf("|");
//			}
//			printf("\n");
//
//		}
//
//		
//	}
//}

//打印棋盘

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; ++i)
	{
		for ( j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j<col-1)//最后一列不打印
				printf("|");
		}
		printf("\n");



		if (i < row - 1)//最后一行不打印
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

//玩家下棋
void player_move(char board[3][3], int row, int col)
{
	int x = 0;
	int y = 0;

	while (1)
	{
		printf("玩家下棋\n");
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
		//判断坐标的合法性
		if (x > 0 && x <=row && y>0 && y <= col)
		{
			//还需判断 下的位置 有没有被占用
			if (board[x-1][y-1]==' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该位置已有棋子，请重新输入\n");
			}
			
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
	
}


//电脑下棋

void computer_move(char board[ROW][COL], int row, int col)
{
	printf("\n");
	printf("电脑下棋\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
	
}


//判断输赢

//判断是否是平局
//返回 1 棋盘没满
static int is_draw(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; ++i)
	{
		for ( j = 0; j < col; ++j)
		{
			//找空格
			if (board[i][j]==' ')
			{
				return 0;//return 0 没有满
			}
		}
	}
	
	return 1; //棋盘满了
}

char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//判断行
	for (i = 0; i < row; ++i)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][0];
		}
	}
	//判断列
	for (i = 0; i < col; ++i)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}

	//判断对角线
	
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
		{
			return board[0][0];
		}

		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ')
		{
			return board[0][2];
		}


		//判断是否是平局
	
	if (is_draw(board, row, col)==1)
	{
		return 'Q';
			 
	}

	//没有人赢 继续
	return 'C';
}

