#include<stdio.h>
int main()
{
	int y,a,b;
	scanf("%d",&y);
	a=y%4;
	b=y%100;
	if(y>=1700&&y<=1917)
	{
		if(y%4==0)
		printf("12.09.%d",y);
		else
		printf("13.09.%d",y);
	}
	else
	{
		if(y%400==0)
		printf("12.09.%d",y);
		else if(a==0&&b!=0)
		printf("12.09.%d",y);
		else
		printf("13.09.%d",y);
	}
	return 0;
}
