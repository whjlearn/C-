#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Add(int x,int y)
//{
//	return x + y;
//}
//int main()
//{
//	int ret = 0;
//	int(*p1)(int, int) = Add;//����ָ��
//
//	 ret =(*p1)(10, 20);//����ָ����ú���
//	 printf("%d\n", ret);
//
//	 ret = p1(10, 5);//����ָ����ú���
//	 printf("%d\n", ret);
//
//	int(*p2[1])(int, int) = {p1};//����  ����ָ������
//	ret = p2[0](5, 1);//ͨ��������ʵ��ú���
//	printf("%d\n", ret);
//
//	//����ָ������ָ��
//	int(*(*p3)[1])(int, int) = &p2;
//	ret = (*p3)[0](8,8);//�������ҵ��������, []���ʵ������ÿ��Ԫ�أ�
//	printf("%d\n", ret);
//
//	//�﷨Ҳ�� ���е��鷳
//	ret = (*((*p3)[0]))(9, 9);
//	printf("%d\n", ret);
//
//
//
//
//	return 0;
//}