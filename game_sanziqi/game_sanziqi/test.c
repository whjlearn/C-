#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game()
{
	//��Ϸ��صĺ���
	char board[ROW][COL];//�洢����,��¼
	
 //��ʼ�����̣��ո��ʼ��
	InitBoard(board,ROW,COL);//��ʼ�����̵ĺ���,����ʼ�������ֵ��
	
//��ӡ����
	DisplayBoard(board,ROW,COL);
	char ret = 0;//������Ϸ״̬
	while (1)
	{
		//�����
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		
		//�ж�����Ƿ�Ӯ�ñ���
		 ret = IsWin(board, ROW, COL);
			if(ret != 'c')
				break;
		//������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ�ñ���
		 ret = IsWin(board, ROW, COL);
			if(ret != 'c')
				break;
	}
	if (ret=='*')
	{
		printf("���Ӯ��\n");

	}
	else if (ret=='#')
	{
		printf("����Ӯ��\n");
		
	}
	else
	{
		printf("ƽ��\n");
		
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
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("������������������\n");
			break;
		}
		

	} while (input);
	return 0;
}