#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


//qsort
//int cmp_arr(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
//void print_arr(int arr[],int  sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_arr);
//	print_arr(arr, sz);
//}

//int main()
//{
//	test1(print_arr, cmp_arr);
//	return 0;
//}
 
//int main()
//{
//	int i = 0;
//	int j = 0;
//	
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i < sz-1; i++)
//	{
//		//一趟冒泡排序
//		int flag = 1;
//		for ( j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j]>arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//
//			}
//		}
//
//		//优化 某趟冒泡排序已经有序了则跳出
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void Swap(char* e1,char* e2,int width)
//{
//	char tmp;
//	tmp = *e1;
//	*e1 = *e2;
//	*e2 = tmp;
//	e1 + (char)width;
//	e2 + (char)width;
//}
//模拟实现qsort 冒泡的方式bubble 可以排序任意类型的数据
//void bubble_sort(void* base, int num,int width, int (*cmp)(const void*e1,const void *e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < num - 1; i++)
//			{
//				//一趟冒泡排序
//				
//				for ( j = 0; j <num-1-i ; j++)
//				{//cmp((char*)base+j*width,(char*)base+(j+1)*width)
//					if (cmp((char*)base + j * width, (char*)base + (j + 1) * width)>0)//算出地址传传过去
//					{
//						//排序函数
//						Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//					}
//				}
//		
//				
//			
//			}
//}



//void test() 
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	
//	//qsort_bubble(void* base,sz,width,cmp_int);
//}

//自己定义的函数 排序方法
//int cmp(const void* e1,const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}

//打印排序过后的数据
//void print_arr(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}


//重点
//模拟实现qsort函数的冒泡排序方式

//结构体测试
struct Stu {
	char name[20];
	int age;
	double sr;
};


void Swap(char* buf1,char* buf2,int width)
{
	int i = 0;
	for(i = 0;i<width;i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	
	}
	
}

//数组
int cmp(const void* e1,const void* e2)
{
	return (*(int*)e1 - *(int*)e2);//这样是升序排序，如果交换两个数位置 就是降序排列
}
void bubble_sort(void* base,int num,int width,int(*cmp)(const void* e1,const void*e2))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < num - 1; i++)
	{
		for (j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)//比较函数
			{
				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);
			}
		}
	}
}

//结构体
int cmp_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}



int main()
{
	
	// int arr[]={9,8,7,6,5,4,3,2,1,0};
	struct Stu arr[3] = { {"zhangsan",18,88.0},{"lishi",28,52.0},{"wangwu",10,65.0}};
	int num = sizeof(arr) / sizeof(arr[0]);
	int width = sizeof(arr[0]);
	bubble_sort(arr,num,width,cmp_by_age);
	


	return 0;
}