#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void left_move(char arr[], int n)
{
	int sz = strlen(arr);
	n %= sz;//去掉重复的循环

	//逆序将要被旋转的字符
	reverse(arr, arr + n - 1);
	//逆序剩余的字符
	reverse(arr + n, arr + sz - 1);
	//逆序整个字符串
	reverse(arr, arr + sz - 1);
}

int main()
{
	char arr[] = "abcdef";
	int n = 0;
	printf("请输入旋转字符个数：\n");
	scanf("%d", &n);
	left_move(arr, n);
	printf("%s\n", arr);
	return 0;
}