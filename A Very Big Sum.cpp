#include<stdio.h>
#define size 100
int main()
{
	int n,i;
	long long int arr[size],sum;
	sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%lld",&arr[i]);
	for(i=0;i<n;i++)
	sum=sum+arr[i];
	printf("%lld",sum);
	return 0;
}
