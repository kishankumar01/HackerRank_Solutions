#include<stdio.h>
int main()
{
	int n,l,r,i;
	scanf("%d%d%d",&n,&l,&r);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		if(arr[i]>=l&&arr[i]<=r)
		continue;
		else
		printf("%d",arr[i]);
	}
	return 0;
}
