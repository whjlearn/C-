#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fp;
    int n, i;
    float score;

    // 打开文件，如果不存在则创建
    fp = fopen("score.txt", "a+");
    if (fp == NULL) {
        printf("文件打开失败\n");
        return 1;
    }

    // 读入n
    printf("请输入要添加的学生数量：");
    scanf("%d", &n);

    // 循环读入n个学生的成绩，并写入文件
    for (i = 0; i < n; i++) {
        printf("请输入第%d个学生的成绩：", i + 1);
        scanf("%f", &score);
        fprintf(fp, "%.2f\n", score);
    }

    // 关闭文件
    fclose(fp);

    printf("学生成绩添加成功！\n");

    return 0;
}










