#include<stdio.h>
int main()
{
	int n,m,i,j,temp,k;
	scanf("%d",&n);
	int arr[n],arr2[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	scanf("%d",&m);
	int arr1[m];
	for(i=n;i<m+n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<m+n;i++)
	printf("%d\t",arr[i]);
	printf("\n");
	for(i=0;i<m+n;i++)
	{
		for(j=i+1;j<n+m;j++)
		{
			if(arr[j]>arr[i])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for(i=0;i<n+m;i++)
	printf("%d\t",arr[i]);
	arr2[0]=arr[0];
	j=1;
	i=0;
	while(j<n+m)
	{
		if(arr2[i]!=arr[j])
		{
			arr2[i+1]=arr[j];
			i++;
		}
		j++;
	}
	arr2[i+1]='\0';
	printf("\n");
	for(i=0;arr2[i]!='\0';i++)
	printf("%d\t",arr2[i]);
	i=i-1;
	
	return 0;
}
