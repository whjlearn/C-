#define _CRT_SECURE_NO_WARNINGS 1.
#include<stdio.h>
int mian() 
{
	FILE* fp;int i = 20,j=30,k,n;
	fp = fopen("d1.dat", "w");
	fprintf(fp, "%d", i);
	fprintf(fp, "%d", j);
	fclose(fp);
	fp = fopen("d1.dat", "r");
	fscanf(fp, "%d%d", &k, &n);
	printf("%d %d", k, n);
	fclose(fp);
	

		return 0;

}