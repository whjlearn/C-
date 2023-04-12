#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORKERS 100  // 最大员工数量

// 员工结构体
typedef struct {
    char name[50];    // 姓名
    char gender[50];   // 性别
    int age;          // 年龄
    char address[50];    // 住址
} Employee;

Employee workers[MAX_WORKERS];  // 所有员工
int num_workers = 0;        // 当前员工数量


//函数声明

//添加员工
void add_worker();

//查找员工
void search_worker();

//修改员工
void revise_worker();

//显示所有员工
void display_all_worker();