#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//�ݹ�
//�ݹ��������Ҫ����
//1.���Ƶݹ������ --> ���������������������������������ʱ�򣬵ݹ�㲻�ټ���
//2.ÿ�εݹ����֮��Խ��Խ�ӽ��������������
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
//	�ݹ�-�����Լ������Լ�
//	print(num);//print�������Դ�ӡ�����������ֵ�ÿһλ
//	return 0;
//}

//�Լ�ʵ�����ַ������ȵĺ���
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

//�ݹ�ʵ��ʵ�����ַ������ȵĺ���
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	
//	if(*str != '\0')
//	{
//		return 1+my_strlen(str+1);//��������Ǽ�1 ����ǰ��++ �����Ǻ���++
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

//�ݹ�ʵ����n�Ľ׳�
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

//���n��쳲�������
//�ݹ�ʵ�֣�̫��
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

//���n��쳲�������
//����ʵ��
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

//������̨������ һ�ο�����һ����������̨�� ������n��̨���ж���������
// ̨����   ����
//   1       1
//   2       2  
//   3       3  3=1+2
//   4       5  5=2+3  �����ܽ���� ��n��̨���ܵ���ǰ����̨������֮��
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

//����ʵ��
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