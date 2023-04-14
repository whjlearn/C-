#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{//strstr
//	char arr = "";
//	char arr1[] = "hgh";
//	char* ret = strstr(arr,arr1);
//	printf("%s", ret);
//	return 0;
//}

//strtok
//int main()
//{
//	char* str1;
//	char arr[50] = "jhiuek@dff.dfdfd!fsdfs.adf";
//	char copy[60] = "";
//	strcpy(copy,arr);
//	char str[] = "@.!";
//	//printf("%s", copy);
//	for ( str1=strtok(copy,str); str1!=NULL; str1=strtok(NULL,str))
//	{
//		printf("%s\n", str1);
//	}
//	//printf("%s",strtok(copy, str));
//	return 0;
//}

//strcat 在原来字符串后面追加
//int main()
//{
//	char arr[20] = "nklkfgirgr";
//	char arr1[5] = "whj";
//	char* ret = strcat(arr, arr1);
//	printf("%s", ret);
//	return 0;
//}

//strerror 报错

//int main()
//{
//	printf("%s\n",strerror(0));
//	printf("%s \n", strerror(1));
//	printf("%s \n", strerror(2));
//	printf("%s \n", strerror(3));
//	printf("%s\n",strerror(errno));
//	perror("malloc");
//	return 0;
//}

//tolower 转成小写
int main()
{
	char ch = 'A';
	char ch1 = 'a';

	putchar(tolower(ch));
	printf("\n");
	putchar(toupper(ch1));

	return 0;
}