#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//���ֲ���
//int main()
//{
//	int n = 0;
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;//���ұ�Ԫ���±�
//	int mid = (left + right) / 2;//�м�Ԫ���±�
//	printf("��������Ҫ���ҵ�����:");
//	scanf("%d",&n);
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (n > arr[mid])
//		{
//			left = mid + 1;
//			
//		}
//		else if (n < arr[mid])
//		{
//			right = mid - 1;
//			
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ:%d\n", mid);
//			break;
//		}
//		
//	}
//	if (left>right)
//	{
//		printf("�Ҳ�����Ҫ���ҵ�����");
//	}
//
//	return 0;
//}


//#include<string.h>
//#include<Windows.h>
//welcome to guizhou university school!!!!!!
//##########################################
//int main()
//{
//	char arr1[] = {"welcome to guizhou university school!!!!!!"};
//	char arr2[] = {"##########################################"};
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//		Sleep(1000);
//		system("cls");
//
//	}
//	
//	printf("%s",arr1);
//	
//	return 0;
//
//}

//������������˳�����
//#include<string.h>
//int main()
//{
//	char password[20] = { 0 };
//	int i = 0 ;
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s",password );
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�������\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//		
//	}
//	
//	if (i == 3)
//	
//		printf("�������������,�˳�����\n");
//
//	
//	return 0;
// }

//��������Ϸ
//1.�Զ�����һ��1-100֮��������
//2.������
// a.�¶��ˣ��͹�ϲ�㣬��Ϸ����
// b.��´��ˣ�����߲´��ˣ����ǲ�С�ˣ������£�ָ���¶�
//3.��Ϸ��һֱ�棬�����˳���Ϸ
#include<stdlib.h>
#include<time.h>
//�˵�
void menu()
{
	printf("********************\n");
	printf("*****  1.play  *****\n");
	printf("*****  0.exit  *****\n");
	printf("********************\n");
}
//����Ϸ�ĺ���
void game()
{
	int guess = 0;	
	int ret = rand()%100 + 1;
	//printf("%d", ret);
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶���!!\n");
			break;
		}
	}
	
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//����Ϸ�ĺ���
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}

	} while (input);
	return 0;
}