#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。
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

//求出0～100000之间的所有“水仙花数”并输出。

//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。 卧槽 写不出来 明天学
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