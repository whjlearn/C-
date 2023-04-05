#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//求两个数的最大公约数
//#include<stdio.h>
//int main()
//{
//	int i = 0, n = 0 , a = 0,b = 0;
//	printf("请输入两个数，中间用空格隔开\n");
//	scanf("%d %d",&a,&b);
//	int ret = a > b ? b : a;
//	for (i = 2; i < ret+1; i++)
//	{
//		if (a%i == 0 && b%i== 0)
//		{
//			if (i > n)
//			{
//				n = i;
//			}
//			
//		}
//	}
//	if (n == 0)
//	{
//		printf("这两个数没有公约数\n");
//		return 0;
//
//	}
//	printf("最大公约数为>:%d\n",n);
//	return 0;
//}

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
int main()
{
	int i = 0;
	int a = 0;
	int count = 0;
	for (i = 9; i < 100; i++)
	{
		if ((a - 9)%10 == 0)
		{
			count++;
		}
	}
	return 0;
}


