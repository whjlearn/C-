#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void fun2()
//{
//	int b = 5;
//	printf("%p\n", &b);//��ַ��һ����
//}
//void fun1()
//{
//	int a = 0;
//	printf("%p\n", &a);//��ַ��һ����
//}
//int main()
//{
//	fun1();
//	fun2();
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	extern void print(char* str);
//	extern int g_val;
//	printf("%d\n", g_val);
//	print("hello bit.\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    FILE* pFile;
//    pFile = fopen("myfile.txt", "w");
//    if (pFile != NULL)
//    {
//        fputs("fopen example", pFile);
//        fclose(pFile);
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    FILE* pFile;
//    long size;
//    pFile = fopen("myfile.txt", "rb");
//    if (pFile == NULL) perror("Error opening file");
//    else
//    {
//        fseek(pFile, 0, SEEK_END);   // non-portable
//        size = ftell(pFile);
//        fclose(pFile);
//        printf("Size of myfile.txt: %ld bytes.\n", size);
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int n;
//    FILE* pFile;
//    char buffer[27];
//    pFile = fopen("myfile.txt", "w+");
//    for (n = 'A'; n <= 'Z'; n++)
//        fputc(n, pFile);
//    rewind(pFile);
//    fread(buffer, 1, 26, pFile);
//    fclose(pFile);
//    buffer[26] = '\0';
//    puts(buffer);
//    return 0;

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int c; // ע�⣺int����char��Ҫ����EOF
    FILE* fp = fopen("test.txt", "r");
    if (!fp) {
        perror("File opening failed");
        return EXIT_FAILURE;
    }
    //fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
    while ((c = fgetc(fp)) != EOF) // ��׼C I/O��ȡ�ļ�ѭ��
    {
        putchar(c);
    }
    //�ж���ʲôԭ�������
    if (ferror(fp))
        puts("I/O error when reading");
    else if (feof(fp))
        puts("End of file reached successfully");
    fclose(fp);
}
