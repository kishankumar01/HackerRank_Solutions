#include<stdio.h>
#define size 1000
int main()
{
	int arr1[size],arr2[size],i,a,b;
	a=0;
	b=0;
	for(i=0;i<3;i++)
	scanf("%d",&arr1[i]);
	for(i=0;i<3;i++)
	scanf("%d",&arr2[i]);
	for(i=0;i<3;i++)
	{
		if(arr1[i]>arr2[i])
		a=a+1;
		else if (arr1[i]<arr2[i])
		b=b+1;
		else
		{
		}
	}
	printf("%d %d",a,b);
	return 0;
}
