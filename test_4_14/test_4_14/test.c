#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	char arr1[20] = "afsfasf";
//	char arr2[] = "asf";
//	char * ret = strstr(arr1,arr2);//strstr 找子集,返回第一次出现的 地址
//	printf("%s\n", ret);
//	return 0;
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以喝多少汽水（编程实现）。
//int main()
//{
//	int sum = 20;
//	int n = 20;
//	int ret;
//	
//	while (ret=n/2)
//	{
//		int qy = n % 2;
//		sum+=ret;
//		ret = ret + qy;
//		n = ret;
//
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//方法1
//	total = money;
//	empty = money;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//
//	printf("%d",total);
//	return 0;
//}

//实现一个对整形数组的冒泡排序
//void bubble(int* arr,int sz) {
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < sz-1; i++)
//	{
//		for ( j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j]>arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr,sz);
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//将数组A中的内容和数组B中的内容进行交换。数组一样大
//int main()
//{
//	int i = 0;
//	int arr[10] = { 14,5,7,4,1,2,6,4,7,9 };
//	int arr1[10] = {7,4,5,8,96,44,85,12,36,45};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i < sz; i++)
//	{
//		arr[i]=arr[i]^ arr1[i];
//		arr1[i] = arr[i]^arr1[i];//这里就是arr[i]
//		arr[i] = arr[i]^arr1[i];
//		
//	}
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
void reverse(int* arr,int sz)
{
	int i = 0;
	int left = 0;
	int right = sz - 1;
	while (left<right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
void print(int* arr, int sz)
{
	int i = 0;
	for ( i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void init(int* arr, int sz)
{
	int i = 0;
	for ( i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//init(arr,sz);
	reverse(arr,sz);
	print(arr,sz);
	return 0;
}

