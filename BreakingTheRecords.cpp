#include<stdio.h>
int main()
{
	int n,i,j,count=0,count1=0;
	scanf("%d",&n);
	int arr[n],hs[n],ls[n];
	for(i=0;i<n;i++)
	scanf("\t%d",&arr[i]);
	hs[0]=ls[0]=arr[0];
	for(i=1,j=0;i<n;i++,j++)
	{
		if(arr[i]>arr[j]&&arr[i]>hs[j])
		{
			hs[i]=arr[i];
			count=count+1;
		}
		else
		hs[i]=hs[j];
	}
	for(i=1,j=0;i<n;i++,j++)
	{
		if(arr[i]<arr[j]&&arr[i]<ls[j])
		{
			ls[i]=arr[i];
			count1=count1+1;
		}
		else
		ls[i]=ls[j];
	}
	printf("\n");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	printf("\n");
	for(i=0;i<n;i++)
	printf("%d\t",hs[i]);
	printf("\n");
	for(i=0;i<n;i++)
	printf("%d\t",ls[i]);
	printf("\n");
	printf("%d\t%d",count,count1);
	return 0;
}
