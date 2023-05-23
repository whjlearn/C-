#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
    //int a = 0x11223344;
    //char* pc = (char*)&a;
    //*pc = 0;
    //printf("%d\n", sizeof(unsigned long));
    //unsigned long pulArray[] = { 6,7,8,9,10 };
    //unsigned long* pulPtr;
    //pulPtr = pulArray;
    //*(pulPtr + 3) += 3;
    //printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
    
    //int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
    //int i = 0;
    //int* p = arr;
    //int sz = sizeof(arr) / sizeof(arr[0]);
    //for (i = 0; i < sz; ++i)
    //{
    //    printf("%d ", *(p + i));
    //}
    //printf("\n");
    //return 0;


//}


//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//int get_sum(int a)
//{
//    int sum = 0;
//
//    return sum = a +
//        (a + a * 10) +
//        (a + a * 10 + a * 100) +
//        (a + a * 10 + a * 100 + a * 1000) +
//        (a + a * 10 + a * 100 + a * 1000 + a * 10000);
//
//}
//void str_reverse(char* str, int n)
//{
//    int begin = 0;
//    int end = n;
//    while (begin < end)
//    {
//        char tmp;
//        tmp = str[begin];
//        str[begin] = str[end];
//        str[end] = tmp;
//        ++begin;
//        --end;
//    }
//}
//int main()
//{
//    /*int ret = get_sum(2);
//    printf("%d\n",ret);*/
//
//    //字符窜逆序
//    char* str = "abcdefg";
//    int sz = strlen(str);
//
//    str_reverse(str,sz);
//    printf("%s \n",str);
//    return 0;
//}


//逆序函数
//#include <string.h>
//#include <assert.h>
//void reverse(char* str) {
//    /*通过做指针和右指针互换。*/
//    assert(str);
//    int len = strlen(str);
//    char* left = str;  //左指针是传进来的首元素的地址
//    char* right = str + len - 1;//右指针是左指针地址加上字符串长度，然后减去1。
//    while (left < right) {
//        // 两值交换
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//
//int main() {
//    char arr[200] = { 0 };
//    scanf("%s", arr);
//    //逆序函数
//    reverse(arr);
//    printf("%s", arr);
//}


//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//int main()
//{
//    int i = 0;
//    for ( i = 0; i < 1000001; i++)
//    {
//
//    }
//}


//打印菱形

//int main() {
//    int line = 7;
//    //打印上半部分
//    for (int i = 0; i < line; ++i) {
//        //空格部分
//        for (int j = 0; j < line - 1 - i; ++j) {
//            printf(" ");
//        }
//        //*部分
//        for (int j = 0; j < 2 * i + 1; ++j) {
//            printf("*");
//        }
//        //换行
//        printf("\n");
//    }
//    //下半部分
//    for (int i = 0; i < line - 1; ++i) {
//        //空格
//        for (int j = 0; j < i + 1; ++j) {
//            printf(" ");
//        }
//        //"*"
//        for (int j = 0; j < 2 * (line - i - 1) - 1; ++j) {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

int main() {
    //从0开始到100000进行遍历
    for (int i = 0; i < 100000; i++) {
        //判断是不是水仙花数
        //1.统计位数。n位数。
        int n = 1;
        int tmp = i;
        while (tmp /= 10) {
            n++;
        }
        //2. 计算i的每一位的n次方之和sum
        tmp = i;
        int sum = 0;
        while (tmp) {
            sum += pow(tmp % 10, n);
            tmp /= 10;
        }
        //3.比较i和sum
        if (i == sum) {
            printf("%d ", i);
        }
    }
    return 0;
}
