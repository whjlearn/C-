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


//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
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
//    //�ַ�������
//    char* str = "abcdefg";
//    int sz = strlen(str);
//
//    str_reverse(str,sz);
//    printf("%s \n",str);
//    return 0;
//}


//������
//#include <string.h>
//#include <assert.h>
//void reverse(char* str) {
//    /*ͨ����ָ�����ָ�뻥����*/
//    assert(str);
//    int len = strlen(str);
//    char* left = str;  //��ָ���Ǵ���������Ԫ�صĵ�ַ
//    char* right = str + len - 1;//��ָ������ָ���ַ�����ַ������ȣ�Ȼ���ȥ1��
//    while (left < right) {
//        // ��ֵ����
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
//    //������
//    reverse(arr);
//    printf("%s", arr);
//}


//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//int main()
//{
//    int i = 0;
//    for ( i = 0; i < 1000001; i++)
//    {
//
//    }
//}


//��ӡ����

//int main() {
//    int line = 7;
//    //��ӡ�ϰ벿��
//    for (int i = 0; i < line; ++i) {
//        //�ո񲿷�
//        for (int j = 0; j < line - 1 - i; ++j) {
//            printf(" ");
//        }
//        //*����
//        for (int j = 0; j < 2 * i + 1; ++j) {
//            printf("*");
//        }
//        //����
//        printf("\n");
//    }
//    //�°벿��
//    for (int i = 0; i < line - 1; ++i) {
//        //�ո�
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
    //��0��ʼ��100000���б���
    for (int i = 0; i < 100000; i++) {
        //�ж��ǲ���ˮ�ɻ���
        //1.ͳ��λ����nλ����
        int n = 1;
        int tmp = i;
        while (tmp /= 10) {
            n++;
        }
        //2. ����i��ÿһλ��n�η�֮��sum
        tmp = i;
        int sum = 0;
        while (tmp) {
            sum += pow(tmp % 10, n);
            tmp /= 10;
        }
        //3.�Ƚ�i��sum
        if (i == sum) {
            printf("%d ", i);
        }
    }
    return 0;
}
