#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//不创建第三个变量 交换两个数 a = 3,b = 5 →a =5 b = 3。
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b ;
//	b = a ^ b ;
//	a = a ^ b;
//	printf("a = %d\n", a);
//	printf("b = %d\n",b);
//	return 0;
//}


//编写代码计算一个整数在内存中的(二进制位)1的个数
int main()
{
	int i = 0;
	int count = 0;
	int n = 0;
	printf("请输入一个整数>:\n");
	scanf("%d", &n);
	for (i = 0; i < 32; i++)
	{
		if ((n & 1) == 1)
		{
			count++;
		}
		n = n >> 1;
			
	}
	printf("二进制位1的个数为:%d\n", count);

	return 0;
}