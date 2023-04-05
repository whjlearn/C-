#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.dat","w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//
//	}
//	//写文件
//	fputs("abc\ndefgh\ngh", pf);
//	
//	//读文件
//	//int ret = fgetc(pf);
//	//printf("%c\n",ret);
//	//ret = fgetc(pf);
//	//printf("%c\n", ret);
//	//ret = fgetc(pf);
//	//printf("%c\n", ret);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
int main()
{

	int n = 0,i = 0,m = 0;
	//打开文件
	FILE* pf = fopen("score.txt", "w");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//操作文件
	printf("请输入需要添加分数的人数:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("请输入第%d个学生的分数:", i + 1);
		scanf("%d", &m);
		fprintf(pf, "%d\n", m);
	}


	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}