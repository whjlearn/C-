#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。
//int prnu(int n)
//{ 
//	int i = 0;
//	for ( i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 1;
//			break;
//		}
//	}
//	if (i>sqrt(n))
//	{
//		return 0;//是素数
//
//	}
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 201; i++)
//	{
//		if (prnu(i) == 0) 
//		{
//			printf("%d ", i);
//		
//		}
//	}
//	return 0;
//
//}

//函数实现是否是闰年

//#include<stdio.h>
//int year(int n)
//{
//	if ((n%4==0 && n%100!=0)||(n%400==0))
//	{
//		return 1;//是闰年
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//
//	return 0;
//}

//函数实现交换两个整数

//int exnum(int n,int m)
//{
//	n = n ^ m ;
//	m = n ^ m ;//m=n
//	n = n ^ m ;
//	return  n, m;
//}

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表

//#include<stdio.h>
//void num_tab(int n)
//{
//	int i = 0;
//	int j = 0;
//	for ( i = 1; i <= n; i++)
//	{
//		for ( j = 1; j <= i; j++)
//		{
//			printf("%d×%d=%2d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 12;
//	num_tab(n);
//	return 0;
//}