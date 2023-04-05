#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int password[] = {0};
	
	printf("请输入密码>:");
	scanf("%d", password);
	//清理缓存区
	int temp;
	while ((temp=getchar()) != '\n')
	{
		;
	}
	//
	printf("请确认密码(Y/N)>:");
	int ch = getchar();
	if(ch=='Y')
	{ 
		printf("确认成功");
	}
	else
	{
		printf("确认失败");
	}
	return 0;
}