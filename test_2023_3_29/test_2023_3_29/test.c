#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fun(int a[], int n)
{
    printf("a[0]=%d\n",a[0]);
    if (n > 1) return a[0] + fun(a + 1, n - 1);
    else  return a[0];
}
int main()
{
    int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
   int sum = fun(a + 2, 4);
    printf("%d\n", sum);
    return 0;
}
