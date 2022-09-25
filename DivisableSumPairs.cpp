#include<stdio.h>
int main()
{
	int n,k,arr[100],i,j,count=0,sum=0;
	scanf("%d\t%d",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sum=arr[i]+arr[j];
			if(sum%k==0&&i<j)
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
