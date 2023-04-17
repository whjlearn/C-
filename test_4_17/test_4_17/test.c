#define _CRT_SECURE_NO_WARNINGS 1
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 15;
//	int ret = 0;
//	for (i=1;i<=32;i++){
//		if (i%2==0)//偶数位
//		{
//			ret = n & 1;
//			printf("偶数位：%d ",ret );
//			n = n >> 1;
//		}
//		else
//		{
//			ret = n & 1;
//			printf("奇数位：%d ", ret);
//			n = n >> 1;
//
//		}
//
//	}
//	return 0;
//}
// 
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，
//则153是一个“水仙花数”。
//int main()
//{
//	int i = 0;
//	int ret = 0;//个位
//
//	for ( i = 2; i <= 100000; i++)
//	{
//		while (ret=i%10)
//		{
//			i = i / 10;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 99999; i++)
//	{
//		int tmp = i;//各位数
//		int count = 0;//n
//		int sum = 0;
//
//		while (tmp)
//		{
//			tmp /= 10;//各位数
//			count++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow((tmp % 10), count);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d是水仙花数\n", i);
//		}
//	}
//	return 0;
//}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，

//例如：2 + 22 + 222 + 2222 + 22222

//#include<stdio.h>
//int main()
//{
//	int a, n;
//	int i, sum = 0, tmp = 0;
//	printf("请输入需要的个数和数值:\n");
//	scanf("%d%d", &n, &a);
//	for (i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum = sum + tmp;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

