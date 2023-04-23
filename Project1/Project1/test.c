#include"employee.h"
// 主函数
int main() {
    int choice;
    int count = 0;
    Employee employees[50];

    do {
        printMenu();   // 打印菜单
        printf("请输入您的选择：");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            addEmployee(employees, &count);
            break;
        case 2:
            displayEmployees(employees, count);
            break;
        case 3:
            searchEmployee(employees, count);
            break;
        case 4:
            deleteEmployee(employees, &count);
            break;
        case 5:
            printf("感谢使用员工管理系统，再见！\n");
            break;
        default:
            printf("输入有误，请重新输入。\n");
            break;
        }
    } while (choice != 5);

    return 0;
}

