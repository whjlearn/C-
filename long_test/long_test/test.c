#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// 学生结构体
typedef struct {
    char name[20];  // 姓名
    int id;         // 学号
    float score;    // 成绩
} Student;


int main(int argc, char** argv) {

    Student students[100];
    int count = 0;
    int choice;
    do {
        printf("\n请选择操作：\n");
        printf("1. 添加学生\n");
        printf("2. 删除学生\n");
        printf("3. 修改学生\n");
        printf("4. 查找学生\n");
        printf("5. 显示所有学生信息\n");
        printf("6. 退出\n");
        printf("请选择操作（输入数字1-6）：");
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
            printf("谢谢使用！\n");
            printf("程序退出！\n");
            exit(0);
        default:
            printf("无效的选项！\n");
            break;
        }
    } while (choice != 0);
    return 0;
}


// 添加学生
void add_student(Student* students, int* count) {
    printf("请输入学生姓名：");
    scanf("%s", students[*count].name);
    printf("请输入学生学号：");
    scanf("%d", &students[*count].id);
    printf("请输入学生成绩：");
    scanf("%f", &students[*count].score);
    (*count)++;
    printf("添加成功！\n");
}

// 删除学生
void delete_student(Student* students, int* count) {
    int id, i, index = -1;
    printf("请输入要删除的学生学号：");
    scanf("%d", &id);
    for (i = 0; i < *count; i++) {
        if (students[i].id == id) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        printf("没有找到对应的学生！\n");
    }
    else {
        for (i = index; i < *count - 1; i++) {
            students[i] = students[i + 1];
        }
        (*count)--;
        printf("删除成功！\n");
    }
}

// 修改学生
void modify_student(Student* students, int count) {
    int id, i, index = -1;
    printf("请输入要修改的学生学号：");
    scanf("%d", &id);
    for (i = 0; i < count; i++) {
        if (students[i].id == id) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        printf("没有找到对应的学生！\n");
    }
    else {
        printf("请输入修改后的学生姓名（原姓名：%s）：", students[index].name);
        scanf("%s", students[index].name);
        printf("请输入修改后的学生成绩（原成绩：%f）：", students[index].score);
        scanf("%f", &students[index].score);
        printf("修改成功！\n");
    }
}

// 查找学生
void find_student(Student* students, int count) {
    int id, i, index = -1;
    printf("请输入要查找的学生学号：");
    scanf("%d", &id);
    for (i = 0; i < count; i++) {
        if (students[i].id == id) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        printf("没有找到对应的学生！\n");
    }
    else {
        printf("学生姓名：%s\n", students[index].name);
        printf("学生学号：%d\n", students[index].id);
        printf("学生成绩：%f\n", students[index].score);
    }
}

// 显示所有学生信息
void show_all_students(Student* students, int count) {
    int i;
    printf("序号\t姓名\t学号\t成绩\n");
    for (i = 0; i < count; i++)
}
