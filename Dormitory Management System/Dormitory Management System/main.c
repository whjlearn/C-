#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[50];
    int rollno;
    char roomno[10];
};

void add_student();
void search_student();
void display_all();

int main() {
    int choice;

    while (1) {
        printf("\n\n----�������ϵͳ----\n");
        printf("1. ���ѧ��\n");
        printf("2. ����ѧ��\n");
        printf("3. ��ʾ����ѧ��\n");
        printf("4. �˳�\n");
        printf("����������ѡ��: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            add_student();
            break;
        case 2:
            search_student();
            break;
        case 3:
            display_all();
            break;
        case 4:
            exit(0);
        default:
            printf("��Ч��ѡ��\n");
        }
    }
    return 0;
}

void add_student() {
    struct student s;
    FILE* fp;

    fp = fopen("students.txt", "a");
    printf("������ѧ������: ");
    scanf("%s", s.name);
    printf("������ѧ��ѧ��: ");
    scanf("%d", &s.rollno);
    printf("������ѧ�������: ");
    scanf("%s", s.roomno);

    fwrite(&s, sizeof(struct student), 1, fp);
    printf("ѧ����ӳɹ�\n");

    fclose(fp);
}

void search_student() {
    struct student s;
    FILE* fp;
    int rollno, found = 0;

    fp = fopen("students.txt", "r");
    printf("������Ҫ������ѧ��ѧ��: ");
    scanf("%d", &rollno);

    while (fread(&s, sizeof(struct student), 1, fp)) {
        if (s.rollno == rollno) {
            printf("ѧ������: %s\n", s.name);
            printf("ѧ��ѧ��: %d\n", s.rollno);
            printf("ѧ�������: %s\n", s.roomno);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("δ�ҵ�ѧ��\n");
    }

    fclose(fp);
}

void display_all() {
    struct student s;
    FILE* fp;

    fp = fopen("students.txt", "r");

    printf("����ѧ���б�:\n");
    printf("ѧ������\tѧ��ѧ��\tѧ�������\n");

    while (fread(&s, sizeof(struct student), 1, fp)) {
        printf("%s\t\t%d\t\t%s\n", s.name, s.rollno, s.roomno);
    }

    fclose(fp);
}

