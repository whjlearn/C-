#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//22 33
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
//int main()
//{
//	int n = 1999;
//	int m = 2299;
//	int i = 0;
//	int count = 0;
//	int ret= 1999^2299;
//	for ( i = 0; i < 32; i++)
//	{	
//		int res = ret & 1;
//		if (res==1)
//		{
//			count++;
//		}
//	ret = ret >> 1;
//	}
//	printf("%d ", count);
//	return 0;
//}


//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}


//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}
// 
//дһ���������ز����������� 1 �ĸ�����
//���磺 15    0000 1111    4 �� 1
//int main()
//{
//	int i = 0;
//	int n = 15;
//	int count = 0;
//	//scanf("%d", &n);
//	for ( i = 0; i < 32; i++)
//	{
//		int ret = n & 1;
//		if (ret == 1)
//		{
//			count++;
//		}
//		n = n >> 1;
//	}
//	printf("%d", count);
//	return 0;
//}
// ��������%2  /2
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	while (n )
//	{
//		if (n%2==1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	printf("%d", count);
//	return 0;
//}
// ��������n= n & (n-1);
//int main()
//{
//	int count = 0;
//	unsigned int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
// ��������n&(n-1)���ж� n�ǲ���2���ݴη�
//int main()
//{
//	int count = 0;
//	unsigned int n = 0;
//	scanf("%d", &n);
//	if (n & (n - 1) == 0)
//	{
//		//��������2���ݴη�  2^0 = 1  ������λ��00000000000000000000000000000001
//							//2^1=2             00000000000000000000000000000010
//	}						//2^2=4				00000000000000000000000000000100
//	return 0;
//}

//����������ʱ������������������������
//#include<stdio.h>
//int main()
//{
//	int i = 5;
//	int n = 3;
//	printf("%d %d\n", i, n);
//	i = i^ n;
//	n = i ^ n;//i
//	i = i ^ n;
//	printf("%d %d\n", i, n);
//	return 0;
//}