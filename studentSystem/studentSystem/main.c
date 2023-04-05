#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#define StudentNumbers 50
#define NameLength 50

typedef struct
{
    int id;
    char name[NameLength];
    int age;
    int score;
    int flag;
} Student;

int add(Student student, Student Students[]);
int del(int id, Student students[]);
int display(Student students[]);
int update(int id, Student students[]);
int search(char name[], Student students[]);

int main()
{
    int id = -1;
    char name[NameLength];
    int choice = 0;
    int stop = 0;
    Student students[StudentNumbers];
    Student student;

    for (int i = 0; i < StudentNumbers; i++)
    {
        students[i].id = i;
        students[i].flag = 0;
    }

    while (stop == 0)
    {
        printf("-------------------------\n");
        printf("*      ѧ������ϵͳ      *\n");
        printf("-------------------------\n");
        printf("1 ���\n");
        printf("2 �޸ĳɼ�\n");
        printf("3 ��ѯ\n");
        printf("4 ɾ��\n");
        printf("5 ��ʾѧ���б�\n");
        printf("0 �˳�����\n");
        printf("��ֱ����������ѡ�");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("������ѧ��������");
            scanf("%s", student.name);
            printf("������ѧ�������䣺");
            scanf("%d", &student.age);
            printf("������ѧ���ɼ���");
            scanf("%d", &student.score);
            add(student, students);
            break;
        case 2:
            printf("������Ҫ�޸ĳɼ���ѧ�����:");
            scanf("%d", &id);
            update(id, students);
            break;
        case 3:
            printf("������Ҫ���ҵ�ѧ������:");
            scanf("%s", name);
            search(name, students);
            break;
        case 4:
            printf("������Ҫɾ����ѧ�����:");
            scanf("%d", &id);
            del(id, students);
            break;
        case 5:
            display(students);
            break;
        case 0:
            stop = 1;
            break;

        default:
            printf("����ѡ������\n");
            break;
        }
    }

    return 0;
}

int add(Student student, Student students[])
{
    for (int i = 0; i < StudentNumbers; i++)
    {
        if (students[i].flag == 0)
        {
            strcpy(students[i].name, student.name);
            students[i].age = student.age;
            students[i].score = student.score;
            students[i].flag = 1;
            return 0;
        }
    }

    return 1;
}

int del(int id, Student students[])
{
    for (int i = 0; i < StudentNumbers; i++)
    {
        if (students[i].id == id)
        {
            students[i].flag = 0;
            return 0;
        }
    }
    return 1;
}

int display(Student students[])
{
    printf("******************\n");
    printf("ѧ���б�\n");
    printf("******************\n");
    for (int i = 0; i < StudentNumbers; i++)
    {
        if (students[i].flag == 1)
        {
            printf("ѧ����ţ�%d��ѧ��������%s�����䣺%d���ɼ���%d\n", students[i].id, students[i].name, students[i].age, students[i].score);
        }
    }
    printf("******************\n");
    return 0;
}

int update(int id, Student students[])
{
    int score = -1;
    printf("�������µĳɼ���");
    scanf("%d", &score);
    for (int i = 0; i < StudentNumbers; i++)
    {
        if (students[i].id == id)
        {
            students[i].score = score;
            return 0;
        }
    }

    return 1;
}

int search(char name[], Student students[])
{
    for (int i = 0; i < StudentNumbers; i++)
    {
        if (strcmp(name, students[i].name) == 0)
        {
            printf("ѧ����ţ� %d��ѧ�������� %s�����䣺 %d���ɼ��� %d\n", students[i].id, students[i].name, students[i].age, students[i].score);
            return 0;
        }
    }
    printf("û�в��ҵ����ѧ����Ϣ��\n");
    return 1;
}
