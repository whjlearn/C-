#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 10,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	printf("%d\n", *arr1);
//	printf("%d\n",**parr);
//	for ( i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < 5; j++)
//		{
//			printf("%2d ", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//malloc
//#include<stdlib.h>
//#include<stdio.h>
//int main()
//{
//	int* ptr = (int *)malloc(40);
//	if (ptr == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	printf("%p\n", ptr);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(ptr + i) = i;
//		printf("%d ", *(ptr + i));
//	}
//	printf("\n");
//	printf("%p\n", ptr);
//	free(ptr);
//	printf("%p\n", ptr);
//	//ptr = NULL;
//	*ptr = 0;
//	printf("%p\n", ptr);
//	return 0;
//}

//calloc
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int * p = (int*)calloc(10, sizeof(int));
//	if (p==NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	int i = 0;
//	for(i = 0;i<10;i++)
//	{
//		printf("%d ", *(p + i));
//	
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//
//	}
//	printf("\n");
//	int * ptr = (int*)realloc(p, 80);
//	if (ptr != NULL) 
//	{
//		p = ptr;
//
//	}
//	printf("%d", *(p+5));
//	free(p);
//	p = NULL;
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void test()
//{
//	char* p = (char*)malloc(100);
//	strcpy(p, "hello");
//	printf(p);
//	free(p);
//	p = NULL;
//	if (p!=NULL)
//	{
//		strcpy(p, "world");
//		printf(p);
//
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}