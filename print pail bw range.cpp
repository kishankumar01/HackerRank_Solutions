#include<stdio.h>
int main()
{
	int u,l,i,a=0,b,c;
	printf("Enter the lowe and upper limit=>>");
	scanf("%d\t%d",&u,&l);
	printf("\n");
	for(i=u+1;i<l;i++)
	{
		c=i;
		b=0;
		while(c>0)
		{
			a=c%10;
			b=b*10+a;
			c=c/10;
		}
		if(i==b)
		printf("%d\t",b);
	}
	return 0;
}
