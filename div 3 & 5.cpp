#include<stdio.h>
int main()
{
	int a,b,sum=0,i;
	printf("Enter the no=>");
	scanf("%d\t%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(i%3==0&&i%5==0)
		sum=sum+i;
	}
	printf("\nSUN=%d",sum);
	return 0;
}
