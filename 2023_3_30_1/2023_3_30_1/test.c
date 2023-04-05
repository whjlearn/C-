#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//计算n的阶乘
//int main()
//{
//	int n ;
//	int i ;
//	int temp = 1;
//	printf("计算n的阶乘，请输入n的值:>");
//	scanf("%d", &n);
//	for ( i = 1; i < n+1 ; i++)
//	{
//		
//		 temp = temp * i;
//		
//	}
//	printf("%d\n",temp );
//	return 0;
//}

//计算 1! + 2! + 3!+...+10!
int main()
{
	int n = 1;
	int i;
	int ret = 1;
	
	int sum = 0;
	do
	{
		for (i = 1; i <= n ; i++)
		{
			
			ret *= i;

		}
		sum += ret;
		n++;
		ret = 1;
	} while (n<=10);
	
	printf("%d", sum);
	return 0;
}
//int main()
//{
//	int sum_add = 0;
//	int sum_mul = 1;
//	int i;
//
//	for (i = 1; i <= 10; i++)
//	{
//		sum_mul *= i;
//		sum_add += sum_mul;
//	}
//	printf("%d", sum_add);
//	return 0;
//}