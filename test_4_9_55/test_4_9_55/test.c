#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19
//int  DigitSum(int n)
//{
//	if (n>9)
//	{
//		return	DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//
//}
//int main()
//{
//	int ret =	DigitSum(25789);
//	printf("%d", ret);
//}

//�ݹ�ʵ��n��k�η�
//int Fctr(int n, int k)
//{
//	if (k>1&&n>1)
//	{
//		
//		return Fctr(n, k - 1)*n;
//		
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n,&k);
//	int ret = Fctr(n, k);
//	printf("%d", ret);
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//int Fblc(int n)
//{
//	if (n>2)
//	{
//		return Fblc(n - 1) + Fblc(n - 2);
//	}
//	else
//	{
//		return 1;
//	}
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fblc(n);
//	printf("%d", ret);
//	return 0;
//}

//�ǵݹ�
//int Fblc(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int i = 0;
//	if (n > 2)
//	{
//		for (i=0;i<n-2;--n)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			
//		}	
//		
//	}
//	else
//	{
//		return 1;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fblc(n);
//	printf("%d", ret);
//	return 0;
//}

int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int j = 0;
	for ( i = 0; i < sz-1; i++)
	{
		for ( j = 0; j < sz-1-i; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}