#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// ѧ���ṹ��
typedef struct {
    char name[20];  // ����
    int id;         // ѧ��
    float score;    // �ɼ�
} Student;


int main(int argc, char** argv) {

    Student students[100];
    int count = 0;
    int choice;
    do {
        printf("\n��ѡ�������\n");
        printf("1. ���ѧ��\n");
        printf("2. ɾ��ѧ��\n");
        printf("3. �޸�ѧ��\n");
        printf("4. ����ѧ��\n");
        printf("5. ��ʾ����ѧ����Ϣ\n");
        printf("6. �˳�\n");
        printf("��ѡ���������������1-6����");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            add_student(students, &count);
            break;
        case 2:
            delete_student(students, &count);
            break;
        case 3:
            modify_student(students, count);
            break;
        case 4:
            find_student(students, count);
            break;
        case 5:
            show_all_students(students, count);
            break;
        case 6:
            printf("ллʹ�ã�\n");
            printf("�����˳���\n");
            exit(0);
        default:
            printf("��Ч��ѡ�\n");
            break;
        }
    } while (choice != 0);
    return 0;
}


// ���ѧ��
void add_student(Student* students, int* count) {
    printf("������ѧ��������");
    scanf("%s", students[*count].name);
    printf("������ѧ��ѧ�ţ�");
    scanf("%d", &students[*count].id);
    printf("������ѧ���ɼ���");
    scanf("%f", &students[*count].score);
    (*count)++;
    printf("��ӳɹ���\n");
}

// ɾ��ѧ��
void delete_student(Student* students, int* count) {
    int id, i, index = -1;
    printf("������Ҫɾ����ѧ��ѧ�ţ�");
    scanf("%d", &id);
    for (i = 0; i < *count; i++) {
        if (students[i].id == id) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        printf("û���ҵ���Ӧ��ѧ����\n");
    }
    else {
        for (i = index; i < *count - 1; i++) {
            students[i] = students[i + 1];
        }
        (*count)--;
        printf("ɾ���ɹ���\n");
    }
}

// �޸�ѧ��
void modify_student(Student* students, int count) {
    int id, i, index = -1;
    printf("������Ҫ�޸ĵ�ѧ��ѧ�ţ�");
    scanf("%d", &id);
    for (i = 0; i < count; i++) {
        if (students[i].id == id) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        printf("û���ҵ���Ӧ��ѧ����\n");
    }
    else {
        printf("�������޸ĺ��ѧ��������ԭ������%s����", students[index].name);
        scanf("%s", students[index].name);
        printf("�������޸ĺ��ѧ���ɼ���ԭ�ɼ���%f����", students[index].score);
        scanf("%f", &students[index].score);
        printf("�޸ĳɹ���\n");
    }
}

// ����ѧ��
void find_student(Student* students, int count) {
    int id, i, index = -1;
    printf("������Ҫ���ҵ�ѧ��ѧ�ţ�");
    scanf("%d", &id);
    for (i = 0; i < count; i++) {
        if (students[i].id == id) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        printf("û���ҵ���Ӧ��ѧ����\n");
    }
    else {
        printf("ѧ��������%s\n", students[index].name);
        printf("ѧ��ѧ�ţ�%d\n", students[index].id);
        printf("ѧ���ɼ���%f\n", students[index].score);
    }
}

// ��ʾ����ѧ����Ϣ
void show_all_students(Student* students, int count) {
    int i;
    printf("���\t����\tѧ��\t�ɼ�\n");
    for (i = 0; i < count; i++)
}
