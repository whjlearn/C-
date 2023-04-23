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
        printf("\n\n----宿舍管理系统----\n");
        printf("1. 添加学生\n");
        printf("2. 搜索学生\n");
        printf("3. 显示所有学生\n");
        printf("4. 退出\n");
        printf("请输入您的选择: ");
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
            printf("无效的选项\n");
        }
    }
    return 0;
}

void add_student() {
    struct student s;
    FILE* fp;

    fp = fopen("students.txt", "a");
    printf("请输入学生姓名: ");
    scanf("%s", s.name);
    printf("请输入学生学号: ");
    scanf("%d", &s.rollno);
    printf("请输入学生房间号: ");
    scanf("%s", s.roomno);

    fwrite(&s, sizeof(struct student), 1, fp);
    printf("学生添加成功\n");

    fclose(fp);
}

void search_student() {
    struct student s;
    FILE* fp;
    int rollno, found = 0;

    fp = fopen("students.txt", "r");
    printf("请输入要搜索的学生学号: ");
    scanf("%d", &rollno);

    while (fread(&s, sizeof(struct student), 1, fp)) {
        if (s.rollno == rollno) {
            printf("学生姓名: %s\n", s.name);
            printf("学生学号: %d\n", s.rollno);
            printf("学生房间号: %s\n", s.roomno);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("未找到学生\n");
    }

    fclose(fp);
}

void display_all() {
    struct student s;
    FILE* fp;

    fp = fopen("students.txt", "r");

    printf("所有学生列表:\n");
    printf("学生姓名\t学生学号\t学生房间号\n");

    while (fread(&s, sizeof(struct student), 1, fp)) {
        printf("%s\t\t%d\t\t%s\n", s.name, s.rollno, s.roomno);
    }

    fclose(fp);
}

