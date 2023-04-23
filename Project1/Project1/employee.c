#define _CRT_SECURE_NO_WARNINGS 1
#include"employee.h"

// 打印菜单
void printMenu() {
    printf("\n");
    printf("*********************\n");
    printf("* 员工管理系统 *\n");
    printf("*********************\n");
    printf("1. 添加员工\n");
    printf("2. 显示所有员工\n");
    printf("3. 查找员工\n");
    printf("4. 删除员工\n");
    printf("5. 退出系统\n");
    printf("\n");
}

// 添加员工
void addEmployee(Employee* employees, int* count) {
    Employee newEmployee;

    printf("请输入员工编号：");
    scanf("%d", &newEmployee.id);
    printf("请输入员工姓名：");
    scanf("%s", newEmployee.name);
    printf("请输入员工年龄：");
    scanf("%d", &newEmployee.age);
    printf("请输入员工工资：");
    scanf("%f", &newEmployee.salary);

    employees[*count] = newEmployee;
    (*count)++;

    printf("员工添加成功！\n");
}

// 显示所有员工
void displayEmployees(Employee* employees, int count) {
    printf("\n");
    printf("编号\t姓名\t年龄\t工资\n");
    printf("--------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%d\t%.2f\n", employees[i].id, employees[i].name, employees[i].age, employees[i].salary);
    }
    printf("\n");
}

// 查找员工
void searchEmployee(Employee* employees, int count) {
    int id;
    printf("请输入要查找的员工编号：");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            printf("编号\t姓名\t年龄\t工资\n");
            printf("--------------------------------\n");
            printf("%d\t%s\t%d\t%.2f\n", employees[i].id, employees[i].name, employees[i].age, employees[i].salary);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("未找到该员工。\n");
    }
}

// 删除员工
void deleteEmployee(Employee* employees, int* count) {
    int id;
    printf("请输入要删除的员工编号：");
    scanf("%d", &id);
    int found = 0;
    for (int i = 0; i < *count; i++) {
        if (employees[i].id == id) {
            found = 1;
            for (int j = i; j < *count - 1; j++) {
                employees[j] = employees[j + 1];
            }
            (*count)--;
            printf("员工删除成功！\n");
            break;
        }
    }

    if (!found) {
        printf("未找到该员工。\n");
    }
}
