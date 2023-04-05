#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//二分查找
//int main()
//{
//	int n = 0;
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;//最右边元素下标
//	int mid = (left + right) / 2;//中间元素下标
//	printf("请输入你要查找的数字:");
//	scanf("%d",&n);
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (n > arr[mid])
//		{
//			left = mid + 1;
//			
//		}
//		else if (n < arr[mid])
//		{
//			right = mid - 1;
//			
//		}
//		else
//		{
//			printf("找到了，下标为:%d\n", mid);
//			break;
//		}
//		
//	}
//	if (left>right)
//	{
//		printf("找不到您要查找的数字");
//	}
//
//	return 0;
//}


//#include<string.h>
//#include<Windows.h>
//welcome to guizhou university school!!!!!!
//##########################################
//int main()
//{
//	char arr1[] = {"welcome to guizhou university school!!!!!!"};
//	char arr2[] = {"##########################################"};
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//		Sleep(1000);
//		system("cls");
//
//	}
//	
//	printf("%s",arr1);
//	
//	return 0;
//
//}

//三次密码输错退出程序
//#include<string.h>
//int main()
//{
//	char password[20] = { 0 };
//	int i = 0 ;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s",password );
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功！！！\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//		
//	}
//	
//	if (i == 3)
//	
//		printf("三次密码均错误,退出程序\n");
//
//	
//	return 0;
// }

//猜数字游戏
//1.自动产生一个1-100之间的随机数
//2.猜数字
// a.猜对了，就恭喜你，游戏结束
// b.你猜错了，会告诉猜大了，还是猜小了，继续猜，指导猜对
//3.游戏会一直玩，除非退出游戏
#include<stdlib.h>
#include<time.h>
//菜单
void menu()
{
	printf("********************\n");
	printf("*****  1.play  *****\n");
	printf("*****  0.exit  *****\n");
	printf("********************\n");
}
//玩游戏的函数
void game()
{
	int guess = 0;	
	int ret = rand()%100 + 1;
	//printf("%d", ret);
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了!!\n");
			break;
		}
	}
	
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//玩游戏的函数
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输出错误，请重新选择\n");
			break;
		}

	} while (input);
	return 0;
}