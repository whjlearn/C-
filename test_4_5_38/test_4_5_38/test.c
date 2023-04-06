#define _CRT_SECURE_NO_WARNINGS 1

//写代码将三个整数数按从大到小输出。
//例如：
//输入：2 3 1
//输出：3 2 1
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	printf("请输入三个整数，中间用空格隔开\n");
//	scanf("%d %d %d", &a, &b, &c);
//	//调整a b c的值使得a > b >c
//	if (a < b)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//
//	}
//	if (a < c)
//	{
//		int temp = a;
//		a = c;
//		c = temp;
//
//	}
//	if (b < c)
//	{
//		int temp = b;
//		b = c;
//		c = temp;
//	}
//
//	//输出
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}


//写一个代码打印1-100之间所有3的倍数的数字
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for ( i = 1; i < 101; i++)
//	{
//		if (i%3 == 0)
//		{
//			printf("%d ", i);
//
//		}
//	}
//	return 0;
//}

//求10 个整数中最大值
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 8,4,7,6,2,30,3,9,5,10 };
//	int i = 0;
//	int max = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}


//写一个代码：打印100~200之间的素数
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//	for ( i = 100; i < 201; i++)
//	{
//		 flag = 1;
//		for ( j = 2 ; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				
//				flag = 0;//进来就表示该数字不是素数，相反 没有进来就表示该数是素数
//				break;
//			}
//
//		}
//		if (flag)
//		{ 
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//打印1000年到2000年之间的闰年
//普通闰年：公历年份是4的倍数，且不是100的倍数的，为闰年（如2004年、2020年等就是闰年）。
//世纪闰年：公历年份是整百数的，必须是400的倍数才是闰年（如1900年不是闰年，2000年是闰年）。
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for ( i = 1000; i < 2001; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		
//			if (i%400 == 0)
//			{
//				printf("%d ", i);
//				count++;
//			}
//		
//		
//	}
//	printf("\n闰年个数为：>%d", count);
//	return 0;
//}

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
// (1/1+1/3+1/5+...+1/99)  -(1/2+1/4+1/6+...+1/100)
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum1 = 0;
//	double sum2 = 0;
//	for ( i = 1; i < 101; i++)
//	{
//		if (i%2 == 0)
//		{
//			 sum1 += 1.0 / i;
//
//		}
//		else
//		{
//			sum2 += 1.0 / i;
//		}
//
//	}
//	double ret = sum2 - sum1;
//	printf("%lf", ret);
//
//	return 0;
//}

//求最大公约数
//方法一 较小的那个数依次递减1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	printf("请输入两个整数,中间用空格隔开\n");
//	scanf("%d %d", &n, &m);
//	int max = n > m ? m:n ;
//	while (1)
//	{
//		if (n%max==0 && m%max==0)
//		{
//			printf("最大公约数为>:%d", max);
//			break;
//				
//		}
//		max--;
//		if (max == 1)
//		{
//			printf("没有最大公约数\n");
//			break;
//		}
//	}
//	return 0;
//}

//方法二 辗转相处法
//     m  %  n    =  t
//     n %   t    =  如果等于0  则t 就是最大公约数
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	printf("请输入两个整数,中间用空格隔开\n");
//	scanf("%d %d", &n, &m);
//	int t = 0;
//	while (t = m%n)
//	{
//		m = n;
//		n = t;
//	}
//
//		printf("最大公约数是:%d",n);
//
//	
//	return 0;
//}


//最小公倍数 = m*n/最大公约数
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int t = 0;
//	printf("请输入两个整数,中间用空格隔开\n");
//	scanf("%d %d", &n, &m);
//	int ret = m * n;
//	while (t = m % n)//求得最大公约数为 n
//	{
//		m = n; 
//		n = t;
//	}
//	//最小公倍数
//	int num = ret / n;
//	printf("最小公倍数为>:%d", num);
//	return 0;
//}