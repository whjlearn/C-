#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ĵ��Խ���60���ػ����аְ�ȡ���ػ���\n");
//		scanf("%s", input);
//		if (strcmp(input, "�ְ�") == 0)
//		{
//			system("shutdown -a");
//			printf("��ȡ��\n");
//			break;
//		}
//	}
//	return 0;
//}

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ 4212
//#include<stdio.h>
//int print(int n)
//{
//	int ret = 0;
//	ret = n % 10;
//	if (n>9)
//	{
//		
//	 	print(n / 10);
//	}
//	return printf("%d ", ret);
//	
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret =print(n);
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
//�ǵݹ�
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int amass = 1;
//	scanf("%d", &n);
//	for ( i = 1; i <= n; i++)
//	{
//		amass *= i;
//	}
//	printf("%d", amass);
//	return 0;
//}

//�ݹ鷽ʽ
//#include<stdio.h>
//int num_d(int n)
//{
//	int amass = 0;
//	if (n>=2)
//	{
//		amass = n*num_d(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//	return amass;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = num_d(n);
//	printf("%d", ret);
//	return 0;
//}

//ģ��strlen,�ݹ�ͷǵݹ�ʵ��
//�ǵݹ�
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	char arr[] = "hahahahjkioup";
//	//printf("%s", arr);
//	//printf("%p %c\n", arr,*arr);
//	//printf("%p %c\n", arr+1,*(arr+1));
//	for ( i = 0; ; ++i)
//	{
//		if(arr[i]!='\0')
//		{
//			count++;
//		}
//		else
//		{
//			break;
//		}
//
//	}
//	printf("%d", count);
//	return 0;
//}
