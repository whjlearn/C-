#define _CRT_SECURE_NO_WARNINGS 1
//����Ļ�����9*9�˷���
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for ( j = 1; j < i+1;j++)
//		{
//			printf("%2d ��%2d =%2d ",j,i,i * j);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}

//��������Ϸ
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void mene()
//{
//	printf("*******************\n");
//	printf("*****1  play  *****\n");
//	printf("*****0  exit  *****\n");
//	printf("*******************\n");
//}
//void game()
//{
//	//����1-100֮��������
//	int guess = 0;
//	int ret = rand()%100+1;
//	printf("%d\n", ret);
//	printf("�뿪ʼ������\n");
//	while (1)
//	{
//		
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���>:%d\n", ret);
//			break;
//		}
//	}
//	
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		mene();
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//ʵ������Ϸ�ĺ���
//			break;
//		case 0:
//			break;
//
//		default:
//			printf("�����������������\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}


//��д������һ������ ���������� ���Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ���
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
//	int i = 0;
//	int k = 0;
//	printf("��������Ҫ���ҵ�����\n");
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���>:%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("�Ҳ�����������\n");
//	}
//	return 0;
//}

//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 1;
//	for (i = 9; i < 101; ++i)
//	{
//		if (i%10==9 || i/10==9)
//		{
//			count++;
//		}
//	}
//	printf("������9�ĸ���Ϊ>:%d\n",count);
//	return 0;
//}


//#include <stdio.h>
//int  main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}