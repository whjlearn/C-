#define _CRT_SECURE_NO_WARNINGS 1
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
#include<stdio.h>
//�ǵݹ�
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

//�ݹ�
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

//�ַ������򣨵ݹ�ʵ�֣�
//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//char arr[] = "abcdef";-->char arr[]= "fedcba"

//�ǵݹ鷽ʽ
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

//�ݹ鷽ʽ
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


