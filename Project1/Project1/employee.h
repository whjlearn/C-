#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ����Ա���ṹ��
typedef struct {
    int id;           // Ա�����
    char name[20];    // Ա������
    int age;          // Ա������
    float salary;     // Ա������
} Employee;



//��������
void printMenu();
void addEmployee(Employee* employees, int* count);
void displayEmployees(Employee* employees, int count);
void searchEmployee(Employee* employees, int count);
void deleteEmployee(Employee* employees, int* count);