#define _CRT_SECURE_NO_WARNINGS 1
//#include  <stdio.h>
//int main()
//{
//	FILE* fp; 
//	int i = 20, j = 30, k, n;
//	fp = fopen("d1.dat", "w");
//	fprintf(fp, "%d", i);
//	fprintf(fp, "%d", j);
//	fclose(fp);
//
//	fp = fopen("d1.dat", "r");
//	fscanf(fp, "%d%d", &k, &n);
//	printf("%d%d", k, n);
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}
//int main()
//{
//	enum a { Spade = 9, Heart = 1, Diamond, Club };
//	printf("%d\n", Spade);
//	printf("%d\n", Heart);
//	printf("%d\n", Diamond);
//	printf("%d\n", Club);
//
//	return 0;
//}
//int main()
//{
//	char arr[20];
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fgets(arr,4 , pf);
//	printf("%s", arr);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//double factorial(int i)
//{
//	if (i <= 1) { return 1; }
//	return i * factorial(i - 1);
//}
//int  main()
//{
//	int i = 5;
//	printf("%f\n", factorial(i));
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	FILE* fp;
//	int a = 50, m;
//	fp = fopen("d.dat", "w");
//	fprintf(fp, "%d", a);
//	fclose(fp);
//	fp = fopen("d.dat", "r");
//	fscanf(fp, "%d", &m);
//	printf("%d ", m);
//	fclose(fp);
//	return 0;
//}

//#include<stdio.h>    
//int main()
//{
//	int m = 1, n = 2, * p = &m, * q = &n, * r;
//	r = p;//
//	p = q;
//	q = r;
//	printf("%d,%d,%d,%d\n", m, n, *p, *q);//m=1,n=2  2  1
//	return 0;
//	//printf("%d", 111);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include<string.h>
//int main()
//{
//    char* p = (char*)malloc(100);
//    p += 3;
//    printf("%d\n", strlen(strcpy(p, "ABCD")));
//    system("PAUSE");
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include<string.h>
//int main()
//{
//  char  p[20] = { 'a','b','c','d' }, q[] = "abc", r[] = "abcde";
//  strcat(p, r);
//  strcpy(p + strlen(q), q);
//  return 0;
//}

//#include <stdio.h>
//int  a, b;
//void fun()
//{
//    a = 100; b = 200;
//}
//int main()
//{
//    int  a = 5, b = 7;
//    fun();
//    printf("%d%d", a, b);
//    return 0;
//}

//#include<stdio.h>
//int main(){
//	char str[2][8] = { "Hello","Beijing" }, * p;
//	p = &str[0][0];
//	printf("%s\n", p + 8);
//	return 0;
//}

//#include <stdio.h>
//struct student
//{
//	int a, b, c;
//};
//int main()
//{
//	struct student stu[2] = { {2,3,4},{5,6,7} };
//	int t;
//	t = stu[0].a + stu[1].b % stu[0].c;//t= 2  + 6%4
//	printf("%d \n", t);//4
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int* p = a + 5, *q = NULL; //*p=6
//	q = p + 5;//*q=11
//	printf("%d %d\n", *p, *q);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char c1, * p1;
//	c1 = 'A';
//	p1 = &c1;
//	(*p1)++;
//	printf("%c\n", c1);
//	return 0;
//}

//#include<stdio.h>
//int fun(int a[], int n)
//{
//    if (n > 1) return a[0] + fun(a + 1, n - 1);
//    else  return a[0];
//}
//int main()
//{
//    int sum;
//    int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    sum = fun(a + 2, 4);
//    printf("%d\n", sum);
//    return 0;
//}

//#include  <stdio.h>
//int main()
//{
//	FILE* fp; 
//	int i = 20, j = 30, k, n;
//	fp = fopen("d1.dat", "w");
//	fprintf(fp, "%d", i);
//	fprintf(fp, "%d", j);
//	fclose(fp);
//	fp = fopen("d1.dat", "r");
//	fscanf(fp, "%d%d", &k, &n);
//	printf("%d %d", k, n);
//	fclose(fp);
//	return 0;
//	//0011 0011 0011 0011 0011 0011 0011 0100
//	// 补码：
//	//1011 0011 0011 0011 0011 0011 0011 0100
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//// 定义用户结构体
//typedef struct {
//    char username[20];
//    char password[20];
//    char email[30];
//} User;
//
//// 注册函数
//void registerUser(User* users, int* count) {
//    User newUser;
//    printf("请输入用户名：");
//    scanf("%s", newUser.username);
//    printf("请输入密码：");
//    scanf("%s", newUser.password);
//    printf("请输入电子邮件地址：");
//    scanf("%s", newUser.email);
//
//    users[*count] = newUser;
//    (*count)++;
//    printf("注册成功！\n");
//}
//
//// 登录函数
//void loginUser(User* users, int count) {
//    char username[20];
//    char password[20];
//    printf("请输入用户名：");
//    scanf("%s", username);
//    printf("请输入密码：");
//    scanf("%s", password);
//
//    int i;
//    for (i = 0; i < count; i++) {
//        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
//            printf("登录成功！\n");
//            return;
//        }
//    }
//    printf("用户名或密码错误！\n");
//}
//
//// 主函数
//int main() {
//    User users[10];
//    int count = 0;
//    int choice;
//
//    do {
//        printf("请选择操作：\n");
//        printf("1. 注册\n");
//        printf("2. 登录\n");
//        printf("3. 退出\n");
//        scanf("%d", &choice);
//
//        switch (choice) {
//        case 1:
//            registerUser(users, &count);
//            break;
//        case 2:
//            loginUser(users, count);
//            break;
//        case 3:
//            printf("再见！\n");
//            break;
//        default:
//            printf("无效的选择！\n");
//            break;
//        }
//    } while (choice != 3);
//
//    return 0;
//}

//设计并实现一个程序求n个学生的总成绩，n由用户确定
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	float scroe = 0.0;
//	float sum = 0.0;
//	printf("请输入需要计算的学生人数\n");
//	scanf("%d",&n);
//
//	for ( i = 0; i < n; i++)
//	{
//		printf("请输入第%d个学生的成绩:",i + 1);
//		scanf("%f",&scroe);
//		sum += scroe;
//	}
//	printf("总成绩为:");
//	printf("%f", sum);
//	return 0;
//}