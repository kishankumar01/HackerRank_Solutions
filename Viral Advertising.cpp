#include<stdio.h>
int main()
{
	int n,i,k,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i==0)
		k=5;
		else
		k=k*3;
		k=k/2;
		c=c+k;
	}
	printf("%d",c);
	return 0;
}
