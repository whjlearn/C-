#include"employee.h"
// ������
int main() {
    int choice;
    int count = 0;
    Employee employees[50];

    do {
        printMenu();   // ��ӡ�˵�
        printf("����������ѡ��");
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
            printf("��лʹ��Ա������ϵͳ���ټ���\n");
            break;
        default:
            printf("�����������������롣\n");
            break;
        }
    } while (choice != 5);

    return 0;
}

