#define _CRT_SECURE_NO_WARNINGS 1
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 15;
//	int ret = 0;
//	for (i=1;i<=32;i++){
//		if (i%2==0)//ż��λ
//		{
//			ret = n & 1;
//			printf("ż��λ��%d ",ret );
//			n = n >> 1;
//		}
//		else
//		{
//			ret = n & 1;
//			printf("����λ��%d ", ret);
//			n = n >> 1;
//
//		}
//
//	}
//	return 0;
//}
// 
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1 ^ 3��5 ^ 3��3 ^ 3��
//��153��һ����ˮ�ɻ�������
//int main()
//{
//	int i = 0;
//	int ret = 0;//��λ
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
//		int tmp = i;//��λ��
//		int count = 0;//n
//		int sum = 0;
//
//		while (tmp)
//		{
//			tmp /= 10;//��λ��
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
//			printf("%d��ˮ�ɻ���\n", i);
//		}
//	}
//	return 0;
//}

//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�

//���磺2 + 22 + 222 + 2222 + 22222

//#include<stdio.h>
//int main()
//{
//	int a, n;
//	int i, sum = 0, tmp = 0;
//	printf("��������Ҫ�ĸ�������ֵ:\n");
//	scanf("%d%d", &n, &a);
//	for (i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum = sum + tmp;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

