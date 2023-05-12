#include<stdio.h>
#include<string.h>
#include<Windows.h>
int main()
{
#define NUM 100
	char bar[NUM + 1];
	memset(bar, '\0', sizeof(bar));
	const char* lable = "|/-\\";
	int i = 0;
	while (i <= 100)
	{
		printf("[%-100s][%d%%] [%c]\r", bar,i,lable[i%4]);
		bar[i] = '#';
		++i;
		Sleep(100);
		
	}
	return 0;
}