#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORKERS 100  // ���Ա������

// Ա���ṹ��
typedef struct {
    char name[50];    // ����
    char gender[50];   // �Ա�
    int age;          // ����
    char address[50];    // סַ
} Employee;

Employee workers[MAX_WORKERS];  // ����Ա��
int num_workers = 0;        // ��ǰԱ������


//��������

//���Ա��
void add_worker();

//����Ա��
void search_worker();

//�޸�Ա��
void revise_worker();

//��ʾ����Ա��
void display_all_worker();