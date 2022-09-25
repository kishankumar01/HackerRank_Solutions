#include<stdio.h>
int main()
{
	int n,k,i,a,b,sum=0;
	scanf("%d\t%d",&n,&a);
	int c[n];
	for(i=0;i<n;i++)
	scanf("\t%d",&c[i]);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(i==a)
		{
		}
		else
		sum=sum+c[i];
	}
	sum=sum/2;
	k=k-sum;
	if(k==0)
	printf("Bon Appetit");
	else
	printf("%d",k);
	return 0;
}
