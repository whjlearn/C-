#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int password[] = {0};
	
	printf("����������>:");
	scanf("%d", password);
	//��������
	int temp;
	while ((temp=getchar()) != '\n')
	{
		;
	}
	//
	printf("��ȷ������(Y/N)>:");
	int ch = getchar();
	if(ch=='Y')
	{ 
		printf("ȷ�ϳɹ�");
	}
	else
	{
		printf("ȷ��ʧ��");
	}
	return 0;
}