#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("************************\n");
	printf("*****  1.play  *********\n");
	printf("*****  0.exit  *********\n");
	printf("************************\n");

}

//初始化
void init_board(char arr[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; ++i)
	{
		for (j = 0; j < cols; ++j)
		{
			arr[i][j] = set;
		}
	}
}

//打印棋盘 ，只打印中间的9*9 
void show_board(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----------  扫雷  --------------\n");
	printf("  ");
	for ( i = 1; i <=col; i++)
	{
		printf(" %d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; ++i)
	{
		printf("%d ", i);
		for (j = 1; j <= col; ++j)
		{
			printf(" %c ", arr[i][j]);
		}
		printf("\n");
	}

	printf("-----------  扫雷  --------------\n");

}


//布置雷
void set_mine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int x = 0;
	int y = 0;
	while (count)
	{
		x = rand() % 9 + 1;
		y = rand() % 9 + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';//布置雷
			count--;
		}

	}

}

int get_mine_count(char mine[ROWS][COLS],int  x,int  y)
{
	return mine[x - 1][y - 1] + mine[x - 1][y] + 
		mine[x - 1][y + 1] + mine[x][y - 1] +
		mine[x][y + 1] + mine[x + 1][y - 1] + 
		mine[x + 1][y] + mine[x + 1][y + 1] - 
		8 * '0';
}

//排查雷
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	
	int win = 0;
	
	while (win<row*col-EASY_COUNT)
	{
		printf("请输入排查的坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，被炸死了！！！\n");
				show_board(mine, ROW, COL);//查看雷的情况
				break;
			}
			else
			{
				int count = get_mine_count(mine, x, y);//查看坐标周围雷的数量
				show[x][y] = count + '0';//转换为字符放进show  对应的坐标位置
				show_board(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("非法坐标，请重新输入\n");
		}
	}

	if (win==col*row-EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		show_board(mine, ROW, COL);//查看雷的情况

	}
	
}
