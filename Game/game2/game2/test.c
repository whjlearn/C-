#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void game()
{

	char mine[ROWS][COLS] = { 0 };//'0'
	char show[ROWS][COLS] = { 0 };//'*'

	//��ʼ������
	init_board(mine, ROWS, COLS,'0');
	init_board(show, ROWS, COLS,'*');
	//������
	set_mine(mine, ROW, COL);
	//��ӡ����
	//show_board(mine, ROW, COL);//ֻ��ʾ �м��9*9
	
	show_board(show,ROW,COL);//ֻ��ʾ �м��9*9
	//�Ų���
	find_mine(mine,show,ROW,COL);
	
	//show_board(show, ROW, COL);//ֻ��ʾ �м��9*9

}


void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}

	} while (input);
}


int main()
{
	test();
	
}