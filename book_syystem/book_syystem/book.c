#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100  // 最大图书数量

// 图书结构体
typedef struct {
    char title[50];    // 书名
    char author[50];   // 作者
    int year;          // 出版年份
    int available;     // 可借数量
} Book;

Book library[MAX_BOOKS];  // 图书馆中的所有图书
int num_books = 0;        // 当前图书馆中的图书数量

 //添加图书到图书馆中
void add_book() {
    // 检查图书馆是否已满
    if (num_books >= MAX_BOOKS) {
        printf("图书馆已满，无法添加新图书。\n");
        return;
    }

    Book new_book = {0};
    printf("请输入书名：\n");
    scanf("%s", &new_book.title);
    printf("请输入作者：\n");
    scanf("%s", &new_book.author);
    printf("请输入出版年份：\n");
    scanf("%d", &new_book.year);
    printf("请输入可借数量：\n");
    scanf("%d", &new_book.available);

    library[num_books++] = new_book;

    printf("图书添加成功！\n");
}

 //查找图书
void search_book() {
    char title[50];
    printf("请输入要查找的书名：\n");
    scanf("%s", title);

    int found = 0;
    for (int i = 0; i < num_books; i++) {
        if (strcmp(title, library[i].title) == 0) {
            printf("书名：%s\n", library[i].title);
            printf("作者：%s\n", library[i].author);
            printf("出版年份：%d\n", library[i].year);
            printf("可借数量：%d\n", library[i].available);  
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("未找到该图书。\n");
    }
}

 //借阅图书
void borrow_book() {
    char title[50];
    printf("请输入要借阅的书名：\n");
    scanf("%s", title);

    int found = 0;
    for (int i = 0; i < num_books; i++) {
        if (strcmp(title, library[i].title) == 0) {
            if (library[i].available > 0) {
                library[i].available--;
                printf("借阅成功！\n");
            }
            else {
                printf("该书已全部借出。\n");
            }
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("未找到该图书。\n");
    }
}

 //归还图书
void return_book() {
    char title[50];
    printf("请输入要归还的书名：\n");
    scanf("%s", title);

    int found = 0;
    for (int i = 0; i < num_books; i++) {
        if (strcmp(title, library[i].title) == 0) {
            library[i].available++;
            printf("归还成功！\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("未找到该图书。\n");
    }
    
}

//查看所有图书
void display_all_books()
{
    printf("所有图书如下：\n");
    for (int i = 0; i < num_books; i++) {
        printf("%d.书名: %s 作者: %s,  出版年份: %d, 可借数量: %d\n", i + 1, library[i].title, library[i].author, library[i].year, library[i].available);
    }
}

// 显示菜单
void display_menu() {
    printf("\n图书管理系统菜单\n");
    printf("1. 添加图书\n");
    printf("2. 查找图书\n");
    printf("3. 借阅图书\n");
    printf("4. 归还图书\n");
    printf("5. 显示所有图书\n");
    printf("0. 退出系统\n");
}

int main() 
{
    int choice;
    do {
        display_menu();
        printf("请输入您的选择：\n");
        scanf("%d", &choice);
        switch (choice) {
        case 0:
            printf("感谢使用图书管理系统，再见！\n");
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
            printf("无效的选择，请重新输入。\n");
            break;
        }
    } while (choice != 0);

    return 0;
}