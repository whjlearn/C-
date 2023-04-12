#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Add(int x,int y)
//{
//	return x + y;
//}
//int main()
//{
//	int ret = 0;
//	int(*p1)(int, int) = Add;//函数指针
//
//	 ret =(*p1)(10, 20);//函数指针调用函数
//	 printf("%d\n", ret);
//
//	 ret = p1(10, 5);//函数指针调用函数
//	 printf("%d\n", ret);
//
//	int(*p2[1])(int, int) = {p1};//数组  函数指针数组
//	ret = p2[0](5, 1);//通过数组访问调用函数
//	printf("%d\n", ret);
//
//	//函数指针数组指针
//	int(*(*p3)[1])(int, int) = &p2;
//	ret = (*p3)[0](8,8);//解引用找到这个数组, []访问到数组的每个元素，
//	printf("%d\n", ret);
//
//	//语法也可 但有点麻烦
//	ret = (*((*p3)[0]))(9, 9);
//	printf("%d\n", ret);
//
//
//
//
//	return 0;
//}