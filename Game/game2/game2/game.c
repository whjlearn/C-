#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("************************\n");
	printf("*****  1.play  *********\n");
	printf("*****  0.exit  *********\n");
	printf("************************\n");

}

//��ʼ��
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

//��ӡ���� ��ֻ��ӡ�м��9*9 
void show_board(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----------  ɨ��  --------------\n");
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

	printf("-----------  ɨ��  --------------\n");

}


//������
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
			mine[x][y] = '1';//������
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

//�Ų���
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	
	int win = 0;
	
	while (win<row*col-EASY_COUNT)
	{
		printf("�������Ų������:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź�����ը���ˣ�����\n");
				show_board(mine, ROW, COL);//�鿴�׵����
				break;
			}
			else
			{
				int count = get_mine_count(mine, x, y);//�鿴������Χ�׵�����
				show[x][y] = count + '0';//ת��Ϊ�ַ��Ž�show  ��Ӧ������λ��
				show_board(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("�Ƿ����꣬����������\n");
		}
	}

	if (win==col*row-EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		show_board(mine, ROW, COL);//�鿴�׵����

	}
	
}
