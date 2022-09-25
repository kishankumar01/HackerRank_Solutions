#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,h,i,max=0;
	scanf("%d\t%d",&n,&h);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	max=arr[0];
	for(i=1;i<n;i++)
	{
		if(max<arr[i])
		max=arr[i];
	}
	if(h>=max)
	{
		printf("0");
		return 0;
	}
	else
	{
		h=abs(h-max);
		printf("%d",h);
		return 0;
	}
	return 0;
}
