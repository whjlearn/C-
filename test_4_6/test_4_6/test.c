#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//递归
//递归的两个必要条件
//1.控制递归的条件 --> 存在限制条件，当满足这个限制条件的时候，递归便不再继续
//2.每次递归调用之后越来越接近这个限制条件。
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	递归-函数自己调用自己
//	print(num);//print函数可以打印参数部分数字的每一位
//	return 0;
//}

//自己实现求字符串长度的函数
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//		
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hello woaini1112023";
//
//	printf("%d", my_strlen(arr));
//	return 0;
//
//}

//递归实现实现求字符串长度的函数
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	
//	if(*str != '\0')
//	{
//		return 1+my_strlen(str+1);//这里必须是加1 或者前置++ 不能是后置++
//	}
//	else
//	{
//		return 0;
//	}
//		
//	return;
//}
//int main()
//{
//	char arr[] = "fsdfdsfsjlruqiirouweoiruwqo";
//
//	printf("%d", my_strlen(arr));
//	return 0;
//
//}

//递归实现求n的阶乘
//#include<stdio.h>
//int Fac(int n)
//{
//	if (n > 1)
//	{
//		return n * Fac(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d ", ret);
//	return 0;
//}

//求第n个斐波拉契数
//递归实现，太慢
//#include<stdio.h>
//int Fblc(int n)
//{
//	
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fblc(n-1)+Fblc(n-2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fblc(n);
//	printf("%d ", ret);
//	return 0;
//}

//求第n个斐波拉契数
//迭代实现
//#include<stdio.h>
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		//printf("%d\n", c);
//		a = b;
//		b = c;
//		n--;
//		
//	}
//	return c;
//}
//int main()
//{
//	
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}

//青蛙跳台阶问题 一次可以跳一个或者两个台阶 问跳上n阶台阶有多少中跳法
// 台阶数   跳法
//   1       1
//   2       2  
//   3       3  3=1+2
//   4       5  5=2+3  可以总结规律 第n阶台阶总等于前两个台阶跳法之和
//#include<stdio.h>
//int Frs(int n)
//{
//	if (n<=2)
//	{
//		if (n == 2)
//		{
//			return 2;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	else
//	{
//		return	Frs(n - 1) + Frs(n - 2);
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Frs(n);
//	printf("%d\n", ret);
//	return 0;
//}

//迭代实现
//#include<stdio.h>
//int Frs(int n)
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	if (n == 2)
//	{
//		return 2;
//	}
//	else if (n == 1)
//	{
//		return 1;
//	}
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Frs(n);
//	printf("%d", ret);
//	return 0;
//}