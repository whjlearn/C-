#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���������������� ���������� a = 3,b = 5 ��a =5 b = 3��
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


//��д�������һ���������ڴ��е�(������λ)1�ĸ���
int main()
{
	int i = 0;
	int count = 0;
	int n = 0;
	printf("������һ������>:\n");
	scanf("%d", &n);
	for (i = 0; i < 32; i++)
	{
		if ((n & 1) == 1)
		{
			count++;
		}
		n = n >> 1;
			
	}
	printf("������λ1�ĸ���Ϊ:%d\n", count);

	return 0;
}