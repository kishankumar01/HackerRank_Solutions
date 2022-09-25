#include<stdio.h>
int main()
{
	int a,b,i,c;
	printf("Enter the num and Xnum=>>");
	scanf("%d\t%d",&a,&b);
	c=a;
	for(i=0;i<b;i++)
	{
		printf("%d\n",c);
		c=c+a;
	}
	return 0;
}
