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
	for(j=0;j<m;j++)
	{
		for(;i>=0;i--)
		{
			if(arr1[j]<arr2[i])
			{
				printf("%d\n",i+2);
				break;
			}
			else if(arr1[j]>=arr2[0])
			{
				printf("1\n");
				break;
			}
			else if(arr1[j]>=arr2[i]&&arr1[j]<arr2[i-1]&&i!=0)
			{
				printf("%d\n",i+1);
				break;
			}
			else
			{
			}
		}
	}
	return 0;
}
