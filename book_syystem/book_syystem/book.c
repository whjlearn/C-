#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100  // ���ͼ������

// ͼ��ṹ��
typedef struct {
    char title[50];    // ����
    char author[50];   // ����
    int year;          // �������
    int available;     // �ɽ�����
} Book;

Book library[MAX_BOOKS];  // ͼ����е�����ͼ��
int num_books = 0;        // ��ǰͼ����е�ͼ������

 //���ͼ�鵽ͼ�����
void add_book() {
    // ���ͼ����Ƿ�����
    if (num_books >= MAX_BOOKS) {
        printf("ͼ����������޷������ͼ�顣\n");
        return;
    }

    Book new_book = {0};
    printf("������������\n");
    scanf("%s", &new_book.title);
    printf("���������ߣ�\n");
    scanf("%s", &new_book.author);
    printf("�����������ݣ�\n");
    scanf("%d", &new_book.year);
    printf("������ɽ�������\n");
    scanf("%d", &new_book.available);

    library[num_books++] = new_book;

    printf("ͼ����ӳɹ���\n");
}

 //����ͼ��
void search_book() {
    char title[50];
    printf("������Ҫ���ҵ�������\n");
    scanf("%s", title);

    int found = 0;
    for (int i = 0; i < num_books; i++) {
        if (strcmp(title, library[i].title) == 0) {
            printf("������%s\n", library[i].title);
            printf("���ߣ�%s\n", library[i].author);
            printf("������ݣ�%d\n", library[i].year);
            printf("�ɽ�������%d\n", library[i].available);  
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("δ�ҵ���ͼ�顣\n");
    }
}

 //����ͼ��
void borrow_book() {
    char title[50];
    printf("������Ҫ���ĵ�������\n");
    scanf("%s", title);

    int found = 0;
    for (int i = 0; i < num_books; i++) {
        if (strcmp(title, library[i].title) == 0) {
            if (library[i].available > 0) {
                library[i].available--;
                printf("���ĳɹ���\n");
            }
            else {
                printf("������ȫ�������\n");
            }
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("δ�ҵ���ͼ�顣\n");
    }
}

 //�黹ͼ��
void return_book() {
    char title[50];
    printf("������Ҫ�黹��������\n");
    scanf("%s", title);

    int found = 0;
    for (int i = 0; i < num_books; i++) {
        if (strcmp(title, library[i].title) == 0) {
            library[i].available++;
            printf("�黹�ɹ���\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("δ�ҵ���ͼ�顣\n");
    }
    
}

//�鿴����ͼ��
void display_all_books()
{
    printf("����ͼ�����£�\n");
    for (int i = 0; i < num_books; i++) {
        printf("%d.����: %s ����: %s,  �������: %d, �ɽ�����: %d\n", i + 1, library[i].title, library[i].author, library[i].year, library[i].available);
    }
}

// ��ʾ�˵�
void display_menu() {
    printf("\nͼ�����ϵͳ�˵�\n");
    printf("1. ���ͼ��\n");
    printf("2. ����ͼ��\n");
    printf("3. ����ͼ��\n");
    printf("4. �黹ͼ��\n");
    printf("5. ��ʾ����ͼ��\n");
    printf("0. �˳�ϵͳ\n");
}

int main() 
{
    int choice;
    do {
        display_menu();
        printf("����������ѡ��\n");
        scanf("%d", &choice);
        switch (choice) {
        case 0:
            printf("��лʹ��ͼ�����ϵͳ���ټ���\n");
            break;
        case 1:
            add_book();
            break;
        case 2:
            search_book();
            break;
        case 3:
            borrow_book();
            break;
        case 4:
            return_book();
            break;
        case 5:
            display_all_books();
            break;
        default:
            printf("��Ч��ѡ�����������롣\n");
            break;
        }
    } while (choice != 0);

    return 0;
}