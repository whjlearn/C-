#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定义员工结构体
typedef struct {
    int id;           // 员工编号
    char name[20];    // 员工姓名
    int age;          // 员工年龄
    float salary;     // 员工工资
} Employee;



//函数声明
void printMenu();
void addEmployee(Employee* employees, int* count);
void displayEmployees(Employee* employees, int count);
void searchEmployee(Employee* employees, int count);
void deleteEmployee(Employee* employees, int* count);