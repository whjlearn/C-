#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>????
int main()
{
    int?m = 1, n = 2, * p = &m, * q = &n, * r;
    r = p;
    p = q;
    q = r;
    printf("%d,%d,%d,%d\n", m, n, *p, *q);
    return 0;
}





