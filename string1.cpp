#include<stdio.h>
#include<string.h>
void abc(char str[100]);
int main()
{
	char str[100],pqw[100];
	gets(str);
	printf("\n%s\n",str);
	pqw[100]=str[5];
	printf("\n%s\n",pqw);
	return 0;	
}

