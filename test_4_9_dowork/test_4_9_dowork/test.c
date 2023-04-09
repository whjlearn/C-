#define _CRT_SECURE_NO_WARNINGS 1
//递归和非递归分别实现strlen
#include<stdio.h>
//非递归
//int my_strlen(char* src)
//{
//	int count = 0;
//	while (*src++!= '\0')
//	{
//		//src++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int ret = my_strlen("adfsdfsdfsfsdf");
//	printf("%d", ret);
//	return 0;
//}

//递归
//int my_strlen(char* src)
//{
//	int count = 0;
//	if (*src!='\0')
//	{
//	count =	1 + my_strlen(src + 1);
//	}
//	return count;
// }
//int main()
//{
//	int ret = my_strlen("sfasfsadf");
//	printf("%d", ret);
//	return 0;
//}

//字符串逆序（递归实现）
//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//char arr[] = "abcdef";-->char arr[]= "fedcba"

//非递归方式
//int my_strlen(char* src)
//{
//	int count = 0;
//	while (*src++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//reverse_string(char* src)
//{
//	int left = 0;
//	int right = my_strlen(src) - 1;
//	while (left < right)
//	{
//		char temp = *(src + left);
//		*(src + left) = *(src + right);
//		*(src + right) = temp;
//		left++;
//		right--;
//	}
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

//递归方式
//int my_strlen(char * src)
//{
//	int count = 0;
//	while (*src++!='\0')
//	{
//		count++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	char tmp = *str;//1
//	int len = my_strlen(str);
//	*str = *(str + len - 1);//2
//	*(str + len - 1) = '\0';//3
//	if (my_strlen(str+1) >= 2)
//	{
//		reverse_string(str + 1);//4
//	}
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}


