#define _CRT_SECURE_NO_WARNINGS 1

//д���뽫�������������Ӵ�С�����
//���磺
//���룺2 3 1
//�����3 2 1
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	printf("�����������������м��ÿո����\n");
//	scanf("%d %d %d", &a, &b, &c);
//	//����a b c��ֵʹ��a > b >c
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
//	//���
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}


//дһ�������ӡ1-100֮������3�ı���������
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

//��10 �����������ֵ
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


//дһ�����룺��ӡ100~200֮�������
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
//				flag = 0;//�����ͱ�ʾ�����ֲ����������෴ û�н����ͱ�ʾ����������
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

//��ӡ1000�굽2000��֮�������
//��ͨ���꣺���������4�ı������Ҳ���100�ı����ģ�Ϊ���꣨��2004�ꡢ2020��Ⱦ������꣩��
//�������꣺����������������ģ�������400�ı����������꣨��1900�겻�����꣬2000�������꣩��
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
//	printf("\n�������Ϊ��>%d", count);
//	return 0;
//}

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
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

//�����Լ��
//����һ ��С���Ǹ������εݼ�1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	printf("��������������,�м��ÿո����\n");
//	scanf("%d %d", &n, &m);
//	int max = n > m ? m:n ;
//	while (1)
//	{
//		if (n%max==0 && m%max==0)
//		{
//			printf("���Լ��Ϊ>:%d", max);
//			break;
//				
//		}
//		max--;
//		if (max == 1)
//		{
//			printf("û�����Լ��\n");
//			break;
//		}
//	}
//	return 0;
//}

//������ շת�ദ��
//     m  %  n    =  t
//     n %   t    =  �������0  ��t �������Լ��
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	printf("��������������,�м��ÿո����\n");
//	scanf("%d %d", &n, &m);
//	int t = 0;
//	while (t = m%n)
//	{
//		m = n;
//		n = t;
//	}
//
//		printf("���Լ����:%d",n);
//
//	
//	return 0;
//}


//��С������ = m*n/���Լ��
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int t = 0;
//	printf("��������������,�м��ÿո����\n");
//	scanf("%d %d", &n, &m);
//	int ret = m * n;
//	while (t = m % n)//������Լ��Ϊ n
//	{
//		m = n; 
//		n = t;
//	}
//	//��С������
//	int num = ret / n;
//	printf("��С������Ϊ>:%d", num);
//	return 0;
//}