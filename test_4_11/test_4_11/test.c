#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ģ��ʵ�ֿ⺯��strlen
//���Ž�
//int my_strlen(const char* src)
//{
//	const char* des = src;
//	while (*src++)
//	{
//		;
//	}
//	return (src - 1 - des);
//
//
//}
//int main()
//{
//	int ret = my_strlen("fasfsfsafsa");
//	printf("%d", ret);
//	return 0;
//}

//int my_strlen(char* src)
//{
//	int count = 0;
//	while (*src++!='\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int ret = my_strlen("afsfsfasf");
//	printf("%d", ret);
//
//	return 0;
//}

//ģ��ʵ�ֿ⺯��strcpy
//���Ž�
//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	while (*dest++ = *src++);
//	return  ret;
//
//}
//int main()
//{
//	char dest[20];
//	char src[] = "abcdfasfasdf";
//	char* p = my_strcpy(dest,src);
//	printf("%s\n", p);
//	return 0;
//}

//char* my_strcpy(char* dest,char* src)
//{
//	char* ret = dest;
//	while(*src!='\0')
//	{
//		*dest++ = *src++;
//		//dest++;
//		//src++;
//
//	}
//	*dest = '\0';
//	return  ret;
//
//}
//int main()
//{
//	char dest[20];
//	char src[] = "abc";
//	char* p = my_strcpy(dest,src);
//	printf("%s\n", p);
//	return 0;
//}

//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�

//���Ž�
void Swap_num(int num[],int sz)
{
	int left = 0;
	int right = sz - 1;
	
	while (left<right)
	{
		//Ŀ�ģ���ż��
		while(left<right&&num[left]%2==1)//��һ��ż�� �Ͳ�����ѭ�� Ŀ�ģ���ż��
		{
			left++;
		}
		//Ŀ�ģ�������
		while(left<right&&num[right]%2==0)//��һ������ �Ͳ�����ѭ�� Ŀ�ģ�������
		{
			right--;
		}
		if (left < right)
		{
			int tmp = num[left];
			num[left] = num[right];
			num[right] = tmp;

		}
	}

}
int main()
{
	int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,14,15,78,5,4,1,2,5,41,2,5,46,45 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	 Swap_num(arr,sz);
	 for ( i = 0; i < sz; i++)
	 {
		 printf("%d ", *(arr + i));
	 }
	return 0;
}

//int* my_num(int* dest, int* src,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int i = 0;
//	int* ret = dest;
//	while (left<=right)
//	{
//		if (*src % 2 == 0)
//		{
//			dest[right] = *src;
//			src++;
//			right = right - 1;
//		}
//		else
//		{
//			dest[left] = *src;
//			left++;
//			src++;
//		}
//	}
//		
//	return ret;
//}
//int main()
//{
//	int i = 0;
//	int src[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int sz = sizeof(src) / sizeof(src[0]);
//	int dest[20];
//	int* num = my_num(dest,src,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(num + i));
//	}
//	return 0;
//}
//void swap_arr(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//
//
//	while (left < right)
//	{
//		// ��ǰ�����ҵ�һ��ż�����ҵ���ֹͣ
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//
//		// �Ӻ���ǰ�ң���һ���������ҵ���ֹͣ
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//
//		// ���ż�����������ҵ����������������ݵ�λ��
//		// Ȼ������ң�ֱ������ָ������
//		if (left < right)
//		{
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,14,15,78,5,4,1,2,5,41,2,5,46,45 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	swap_arr(arr,sz);
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}