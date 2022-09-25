#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int void()
{
	int n,a,b,c,i;
	printf("Enter the no=");
	scanf("%d",&n);
	a=2;
	b=3;
	if(n==4||n==5)
	printf("4");
	else if(n>5)
	{
		for(c=5;c<n;c=a+b)
		{
			for(i=++b;i<c;i++)
			{
				printf(",%d ",i);
			}
			a=b;
			b=c;
		}
		for(i=i+1;i<=n;i++)
		{
			printf(",%d ",i);
		}
	}
	else
	{
		printf("INVALIED INPUT");
	}
	return 0;
}
