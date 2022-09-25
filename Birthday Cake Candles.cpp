#include<stdio.h>
#define size 100000
int main()
{
	int arr[size],n,i,temp,j,k,arr1[size],count;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
			if(arr[i]>arr[j+1])
			{
				temp=arr[i];
				arr[i]=arr[j+1];
				arr[j+1]=temp;
			}
	}
	/*for(i=0;i<n;i++)
	printf("%d\t",arr[i]);*/
	k=0;
	count=1;
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i;j<n;j++)
		{
			if(arr[i]==arr[j+1])
			{
				count=count+1;
				i=j;
			}
		}
		arr1[k]=count;
		k++;
	}
/*	printf("\n\n%d\n",k);
	for(i=0;i<k;i++)
	printf("%d\t",arr1[i]);*/
	temp=arr1[0];
	for(i=1;i<k;i++)
	if(temp<arr1[i])
	temp=arr1[i];		//temp=arr[i];
	printf("%d",temp);
	return 0;
}
