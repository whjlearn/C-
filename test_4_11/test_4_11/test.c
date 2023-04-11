#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//模拟实现库函数strlen
//更优解
//int my_strlen(const char* src)
//{
//	const char* des = src;
//	while (*src++)
//	{
//		;
//	}
//	return (src - 1 - des);
//
//
//}
//int main()
//{
//	int ret = my_strlen("fasfsfsafsa");
//	printf("%d", ret);
//	return 0;
//}

//int my_strlen(char* src)
//{
//	int count = 0;
//	while (*src++!='\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int ret = my_strlen("afsfsfasf");
//	printf("%d", ret);
//
//	return 0;
//}

//模拟实现库函数strcpy
//更优解
//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	while (*dest++ = *src++);
//	return  ret;
//
//}
//int main()
//{
//	char dest[20];
//	char src[] = "abcdfasfasdf";
//	char* p = my_strcpy(dest,src);
//	printf("%s\n", p);
//	return 0;
//}

//char* my_strcpy(char* dest,char* src)
//{
//	char* ret = dest;
//	while(*src!='\0')
//	{
//		*dest++ = *src++;
//		//dest++;
//		//src++;
//
//	}
//	*dest = '\0';
//	return  ret;
//
//}
//int main()
//{
//	char dest[20];
//	char src[] = "abc";
//	char* p = my_strcpy(dest,src);
//	printf("%s\n", p);
//	return 0;
//}

//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。

//更优解
void Swap_num(int num[],int sz)
{
	int left = 0;
	int right = sz - 1;
	
	while (left<right)
	{
		//目的：找偶数
		while(left<right&&num[left]%2==1)//是一个偶数 就不进入循环 目的：找偶数
		{
			left++;
		}
		//目的：找奇数
		while(left<right&&num[right]%2==0)//是一个奇数 就不进入循环 目的：找奇数
		{
			right--;
		}
		if (left < right)
		{
			int tmp = num[left];
			num[left] = num[right];
			num[right] = tmp;

		}
	}

}
int main()
{
	int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,14,15,78,5,4,1,2,5,41,2,5,46,45 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	 Swap_num(arr,sz);
	 for ( i = 0; i < sz; i++)
	 {
		 printf("%d ", *(arr + i));
	 }
	return 0;
}

//int* my_num(int* dest, int* src,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int i = 0;
//	int* ret = dest;
//	while (left<=right)
//	{
//		if (*src % 2 == 0)
//		{
//			dest[right] = *src;
//			src++;
//			right = right - 1;
//		}
//		else
//		{
//			dest[left] = *src;
//			left++;
//			src++;
//		}
//	}
//		
//	return ret;
//}
//int main()
//{
//	int i = 0;
//	int src[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int sz = sizeof(src) / sizeof(src[0]);
//	int dest[20];
//	int* num = my_num(dest,src,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(num + i));
//	}
//	return 0;
//}
//void swap_arr(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//
//
//	while (left < right)
//	{
//		// 从前往后，找到一个偶数，找到后停止
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//
//		// 从后往前找，找一个奇数，找到后停止
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//
//		// 如果偶数和奇数都找到，交换这两个数据的位置
//		// 然后继续找，直到两个指针相遇
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,14,15,78,5,4,1,2,5,41,2,5,46,45 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	swap_arr(arr,sz);
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}