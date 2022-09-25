#include<stdio.h>
int main()
{
	int n,k,i,j,temp;
	printf("Enter the value of N _K=>>");
	scanf("%d\t%d",&n,&k);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("\t%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<k;i++)
	printf("%d\t",arr[i]);
	for(i=n-1;i>=k;i--)
	printf("%d\t",arr[i]);
	return 0;
}
