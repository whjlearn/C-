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
	n %= sz;//ȥ���ظ���ѭ��

	//����Ҫ����ת���ַ�
	reverse(arr, arr + n - 1);
	//����ʣ����ַ�
	reverse(arr + n, arr + sz - 1);
	//���������ַ���
	reverse(arr, arr + sz - 1);
}

int main()
{
	char arr[] = "abcdef";
	int n = 0;
	printf("��������ת�ַ�������\n");
	scanf("%d", &n);
	left_move(arr, n);
	printf("%s\n", arr);
	return 0;
}