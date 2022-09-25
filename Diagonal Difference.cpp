#include<stdio.h>
#include<stdlib.h>
#define size 1000
int main()
{
	int arr[size][size],i,j,n,a,b,c;
	a=b=c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&arr[i][j]);
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		if(i==j)
		a=a+arr[i][j];
	}
	for(i=0;i<n;i++)
	b=b+arr[i][n-1-i];
	c=abs(a-b);
	printf("%d",c);
	return 0;
}
