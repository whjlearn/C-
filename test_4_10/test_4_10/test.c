#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣
//int main()
//{
//	char arr[] = "afdfdafadsf";
//	char *p = arr;
//	while (*p++ != '\0')
//	{
//		printf("%c ", *p);
//	}
//	//printf("hello word");
//	return 0;
//}

//���0��100000֮������С�ˮ�ɻ������������

//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//��:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ������� �Բ� д������ ����ѧ
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	int result = 0;
//	int sum = 0;
//	for ( i = 153; i < 100000; i++)
//	{
//		int chu = 0;
//		while (i>9)
//		{
//			ret = i % 10;
//			i = i / 10;
//			sum += ret * ret * ret;
//		}
//		if (sum == chu)
//		{
//			printf("%d ",chu);
//		}
//		
//
//	}
//	return 0;
//}