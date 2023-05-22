#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//�˵�
void menu()
{
	printf("******  ������  ******\n");
	printf("**********************\n");
	printf("***      1.play   ****\n");
	printf("***      0.exit   ****\n");
	printf("**********************\n");

}
//��ʼ��
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

//��ӡ����
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

//��ӡ����

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; ++i)
	{
		for ( j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j<col-1)//���һ�в���ӡ
				printf("|");
		}
		printf("\n");



		if (i < row - 1)//���һ�в���ӡ
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

//�������
void player_move(char board[3][3], int row, int col)
{
	int x = 0;
	int y = 0;

	while (1)
	{
		printf("�������\n");
		printf("����������:>");
		scanf("%d %d", &x, &y);
		//�ж�����ĺϷ���
		if (x > 0 && x <=row && y>0 && y <= col)
		{
			//�����ж� �µ�λ�� ��û�б�ռ��
			if (board[x-1][y-1]==' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("��λ���������ӣ�����������\n");
			}
			
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
	
}


//��������

void computer_move(char board[ROW][COL], int row, int col)
{
	printf("\n");
	printf("��������\n");
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


//�ж���Ӯ

//�ж��Ƿ���ƽ��
//���� 1 ����û��
static int is_draw(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; ++i)
	{
		for ( j = 0; j < col; ++j)
		{
			//�ҿո�
			if (board[i][j]==' ')
			{
				return 0;//return 0 û����
			}
		}
	}
	
	return 1; //��������
}

char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//�ж���
	for (i = 0; i < row; ++i)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][0];
		}
	}
	//�ж���
	for (i = 0; i < col; ++i)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}

	//�ж϶Խ���
	
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
		{
			return board[0][0];
		}

		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] != ' ')
		{
			return board[0][2];
		}


		//�ж��Ƿ���ƽ��
	
	if (is_draw(board, row, col)==1)
	{
		return 'Q';
			 
	}

	//û����Ӯ ����
	return 'C';
}

