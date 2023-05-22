#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void game()
{
	char ret;
	char board[ROW][COL] = { 0 };

	//��ʼ����������
	InitBoard(board,ROW, COL);
	
	//��ӡ����
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		//�������
		player_move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

		//�ж���Ӯ
		 ret = is_win(board, ROW, COL);
		if (ret != 'C')//�ж���Ӯ�ĺ���������C ���ǲ����� ��Ϸ���� ��������ѭ��ѭ��
			break;

		//��������
		computer_move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

		//�ж���Ӯ
		ret = is_win(board, ROW, COL);
		if (ret != 'C')//�ж���Ӯ�ĺ���������C ���ǲ����� ��Ϸ���� ��������ѭ��
			break;
	}


	//�ߵ�����  �жϽ��
	if (ret=='*')
	{
		printf("���Ӯ\n");
	}
	else if(ret=='#')
	{
		printf("����Ӯ\n");

	}
	else
	{
		printf("ƽ��\n");

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
		printf("��ѡ��>");
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
			printf("�������������ѡ��\n");
			break;
		}

	} while (input);
}
int main()
{
	test();
	
	return 0;
}