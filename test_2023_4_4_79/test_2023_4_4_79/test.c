#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>

//指针类型的意义 表示指针解引用的权限有多大* int类型解引用4个字节 00 00 00 00
// char 类型 char* pa 解引用一个字节 00  ?? ?? ??
//int main()
//{
//	int a = 10;
//	char* pb = &a;
//	int* pa = &a;
//	//*pb = 0;
//	*pa = 0;
//	return 0;
//}

//指针类型的意义表示 指针向前走或者向后走 一步的步长有多大
//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = &arr;
//	char* pb = &arr;
//	printf("pa的值   = %p\n", pa);//
//	printf("pa+1的值 = %p\n", pa+1);//
//	printf("pb的值   = %p\n", pb);//
//	printf("pb+1的值 = %p\n", pb + 1);//
//	return 0;
//}



//野指针
//int main()
//{//这里的p就是一个 => 野指针
//	int* p;//p 是一个局部的指针变量 ，局部变量不初始化的话，默认是随机值
//	*p = 20;//非法访问内存了
//	return 0;
//}
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}

//#include <stdio.h>
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	printf("请输入第一个整数\n");
//	scanf("%d", &i);
//	printf("请输入第二个整数\n");
//	scanf("%d", &n);
//	int ret = i > n ? i : n;
//	printf("较大值为:%d", ret);
//	return 0;
//}

#include<stdio.h>
int main()
{

	return 0;
}