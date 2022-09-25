#include<stdio.h>
int main()
{
	int n,a,b,c,i;
	printf("Enter the No=");
	scanf("%d",&n);
	a=1;
	b=1;
	if(n==1)	//Program for Fibonacci upto n no
	printf("0,1,1");    // like n=20; 0,1,1,2,3,5,8,13
	else if(n>=2)
	{
		printf("0, 1, 1");
		c=a+b;
		for(i=2;i<=n&&c<=n;i++)
		{
			printf(",%d ",c);
			a=b;
			b=c;
			c=a+b;
		}
		printf("\n\n");
		while(c>2)
		{
			c=c-a;
			a=b-a;
			b=c-a;
			printf(",%d ",c);
		}
		printf(" 1, 1, 0");
	}
	else
	printf("Invalied I/P...");
	return 0;
}
