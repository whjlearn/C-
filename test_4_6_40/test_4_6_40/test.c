#define _CRT_SECURE_NO_WARNINGS 1
//在屏幕上输出9*9乘法表
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for ( j = 1; j < i+1;j++)
//		{
//			printf("%2d ×%2d =%2d ",j,i,i * j);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}

//猜数字游戏
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
//	//产生1-100之间的随机数
//	int guess = 0;
//	int ret = rand()%100+1;
//	printf("%d\n", ret);
//	printf("请开始猜数字\n");
//	while (1)
//	{
//		
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了>:%d\n", ret);
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
//		printf("请选择\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//实现玩游戏的函数
//			break;
//		case 0:
//			break;
//
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}


//编写代码在一个整形 有序数组中 查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
//	int i = 0;
//	int k = 0;
//	printf("请输入你要查找的数字\n");
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
//			printf("找到了，下标是>:%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到，奥利给\n");
//	}
//	return 0;
//}

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
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
//	printf("出现了9的个数为>:%d\n",count);
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