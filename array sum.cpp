#include<stdio.h>
#define size 10000
int main()
{
	int arr[size],i,x,sum;
	printf("Enter the length=");
	scanf("%d",&x);
	printf("Enter the no=");
	for(i=0;i<x;i++)
	scanf("%d",&arr[i]);
	sum=0;
	for(i=0;arr[i]!=0;i++)
	sum=sum+arr[i];
	printf("SUM=%d",sum);
	return 0;
}
