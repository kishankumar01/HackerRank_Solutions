#include<stdio.h>
int main()
{
	char a;
	int i=70,l;
	scanf("%c",&a);
	l=i;
	i=a;
	a=l;
	printf("%d\t%c",i,a);
	return 0;	
}
