#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������
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
//		return 0;//������
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

//����ʵ���Ƿ�������

//#include<stdio.h>
//int year(int n)
//{
//	if ((n%4==0 && n%100!=0)||(n%400==0))
//	{
//		return 1;//������
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

//����ʵ�ֽ�����������

//int exnum(int n,int m)
//{
//	n = n ^ m ;
//	m = n ^ m ;//m=n
//	n = n ^ m ;
//	return  n, m;
//}

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

//#include<stdio.h>
//void num_tab(int n)
//{
//	int i = 0;
//	int j = 0;
//	for ( i = 1; i <= n; i++)
//	{
//		for ( j = 1; j <= i; j++)
//		{
//			printf("%d��%d=%2d ", j, i, j * i);
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