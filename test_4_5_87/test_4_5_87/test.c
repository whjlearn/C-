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

//�������������Լ��
//#include<stdio.h>
//int main()
//{
//	int i = 0, n = 0 , a = 0,b = 0;
//	printf("���������������м��ÿո����\n");
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
//		printf("��������û�й�Լ��\n");
//		return 0;
//
//	}
//	printf("���Լ��Ϊ>:%d\n",n);
//	return 0;
//}

//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
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


