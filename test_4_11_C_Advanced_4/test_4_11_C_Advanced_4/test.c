#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Swp(int(*p)[5])
{
	int i = 0;
	
	//printf("%d\n", p);
	printf("%p\n", p);//   005EF7F4
	printf("%p\n", p+1);// 005EF808//����ox14=20�ֽ�(ʮ����)������ʮ���ֽ�
	printf("\n");
	printf("%p\n", *p);//  005EF7F4
	printf("%p\n", *p+1);//005EF7F8 *p+1 �����ĸ��ֽ�

	
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{4,5,6,7,8} ,{8,5,4,7,9} };
	int sz = sizeof(arr)/sizeof(arr[0][0]);
	printf("%d\n",sz);
	Swp(arr);
	return;
}