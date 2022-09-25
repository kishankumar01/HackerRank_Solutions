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
	for(i=0;i<m;i++)
	scanf("%d",&arr1[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[j]>arr[i])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	arr2[0]=arr[0];
	j=1;
	i=0;
	while(j<n)
	{
		if(arr2[i]!=arr[j])
		{
			arr2[i+1]=arr[j];
			i++;
		}
		j++;
	}
	printf("\n");
	for(i=0;arr2[i]!='\0';i++)
	printf("%d\t",arr2[i]);
	i--;
	for(k=i,j=0;k>=0||j=='\0';k--)
	{
		if(arr1[j]<arr2[k])
		{
			printf("%d\n",k+2);
			j++;
		}
		else if(arr1[j]>=arr2[k]&&arr1[j]<arr2[k-1]&&k!=0)
		{
			printf("%d\n",k+1);
			j++;
		}
		else if(arr1[j]>=arr2[0])
		{
			printf("1\n");
			j++;
		}
		else
		{
		}
	}
	return 0;
}
