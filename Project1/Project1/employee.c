#define _CRT_SECURE_NO_WARNINGS 1
#include"employee.h"

// ��ӡ�˵�
void printMenu() {
    printf("\n");
    printf("*********************\n");
    printf("* Ա������ϵͳ *\n");
    printf("*********************\n");
    printf("1. ���Ա��\n");
    printf("2. ��ʾ����Ա��\n");
    printf("3. ����Ա��\n");
    printf("4. ɾ��Ա��\n");
    printf("5. �˳�ϵͳ\n");
    printf("\n");
}

// ���Ա��
void addEmployee(Employee* employees, int* count) {
    Employee newEmployee;

    printf("������Ա����ţ�");
    scanf("%d", &newEmployee.id);
    printf("������Ա��������");
    scanf("%s", newEmployee.name);
    printf("������Ա�����䣺");
    scanf("%d", &newEmployee.age);
    printf("������Ա�����ʣ�");
    scanf("%f", &newEmployee.salary);

    employees[*count] = newEmployee;
    (*count)++;

    printf("Ա����ӳɹ���\n");
}

// ��ʾ����Ա��
void displayEmployees(Employee* employees, int count) {
    printf("\n");
    printf("���\t����\t����\t����\n");
    printf("--------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%d\t%.2f\n", employees[i].id, employees[i].name, employees[i].age, employees[i].salary);
    }
    printf("\n");
}

// ����Ա��
void searchEmployee(Employee* employees, int count) {
    int id;
    printf("������Ҫ���ҵ�Ա����ţ�");
    scanf("%d", &id);

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            printf("���\t����\t����\t����\n");
            printf("--------------------------------\n");
            printf("%d\t%s\t%d\t%.2f\n", employees[i].id, employees[i].name, employees[i].age, employees[i].salary);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("δ�ҵ���Ա����\n");
    }
}

// ɾ��Ա��
void deleteEmployee(Employee* employees, int* count) {
    int id;
    printf("������Ҫɾ����Ա����ţ�");
    scanf("%d", &id);
    int found = 0;
    for (int i = 0; i < *count; i++) {
        if (employees[i].id == id) {
            found = 1;
            for (int j = i; j < *count - 1; j++) {
                employees[j] = employees[j + 1];
            }
            (*count)--;
            printf("Ա��ɾ���ɹ���\n");
            break;
        }
    }

    if (!found) {
        printf("δ�ҵ���Ա����\n");
    }
}
