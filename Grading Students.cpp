#include<stdio.h>
int main()
{
	int n,i,a,b;
	a=b=0;
	scanf("%d",&n);
	int arr[n],arr1[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		if(arr[i]>37)
		{
			a=arr[i]/5;
			a=a+1;
			b=a*5;
			if(b-arr[i]<3)
			arr1[i]=b;
			else
			arr1[i]=arr[i];
		}
		else
		{
			arr1[i]=arr[i];	
		}
	}
	for(i=0;i<n;i++)
	printf("%d\n",arr1[i]);
	return 0;
}
