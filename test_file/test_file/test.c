#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.dat","w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//
//	}
//	//д�ļ�
//	fputs("abc\ndefgh\ngh", pf);
//	
//	//���ļ�
//	//int ret = fgetc(pf);
//	//printf("%c\n",ret);
//	//ret = fgetc(pf);
//	//printf("%c\n", ret);
//	//ret = fgetc(pf);
//	//printf("%c\n", ret);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
int main()
{

	int n = 0,i = 0,m = 0;
	//���ļ�
	FILE* pf = fopen("score.txt", "w");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//�����ļ�
	printf("��������Ҫ��ӷ���������:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("�������%d��ѧ���ķ���:", i + 1);
		scanf("%d", &m);
		fprintf(pf, "%d\n", m);
	}


	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}