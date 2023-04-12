#include"Employee Management.h"
//函数的实现
// 

 //添加员工
void add_worker() {
    // 检查员工是否已满
    if (num_workers >= MAX_WORKERS) {
        printf("员工已满，无法添加新员工\n");
        return;
    }

    Employee new_worker = { 0 };
    printf("请输入姓名：");
    scanf("%s", &new_worker.name);
    printf("请输入性别：");
    scanf("%s", &new_worker.gender);
    printf("请输年龄：");
    scanf("%d", &new_worker.age);
    printf("请输入居住地址：");
    scanf("%s", &new_worker.address);

    workers[num_workers++] = new_worker;

    printf("员工添加成功！\n");
}

//查找员工
void search_worker() {
    char name[50];
    printf("请输入要查找员工的姓名：");
    scanf("%s", name);

    int found = 0;
    for (int i = 0; i < num_workers; i++) {
        if (strcmp(name, workers[i].name) == 0) {
            printf("姓名：%s\n", workers[i].name);
            printf("性别：%s\n", workers[i].gender);
            printf("年龄：%d\n", workers[i].age);
            printf("住址：%s\n", workers[i].address);

            found = 1;
            break;
        }
    }
    if (!found) {
        printf("未找到该名员工。\n");
    }
}

//修改员工信息
void revise_worker() {
    char name[50];
    char newname[50];

    printf("请输入要修改员工的姓名：");
    scanf("%s", name);
    int found = 0;
    for (int i = 0; i < num_workers; i++) {
        if (strcmp(name, workers[i].name) == 0) {
            printf("请输入姓名：");
            scanf("%s", &workers[i].name);
            printf("请输入性别：");
            scanf("%s", &workers[i].gender);
            printf("请输年龄：");
            scanf("%d", &workers[i].age);
            printf("请输入居住地址：");
            scanf("%s", &workers[i].address);
            printf("员工修改成功！\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("未找到该名员工。\n");
    }
}

//显示所有员工
void display_all_worker()
{
    int i = 0;
    if (num_workers != 0)
    {
        printf("所有员工如下：\n");
        for ( i = 0; i < num_workers; i++)
        {
            printf("id:%d \n姓名: %s \n性别: %s  \n年龄: %d \n住址: %s\n", i + 1, workers[i].name, workers[i].gender, workers[i].age, workers[i].address);
        }

    }
    else
    {
        printf("还没有添加员工信息哦！！\n");
        
    }
    
   
}



 
   
