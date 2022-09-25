#include<stdio.h>
#define size 5
int main()
{
	int arr[size],i,j,temp,a,b;
	a=b=0;
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<size;i++)
	for(j=i;j<size;j++)
	{
		if(arr[i]>=arr[j+1])
		{
			temp=arr[i];
			arr[i]=arr[j+1];
			arr[j+1]=temp;
		}
		
	}
	for(i=1;i<size;i++)
	a=a+arr[i+1];
	for(i=0;i<size;i++)
	b=b+arr[i];
	printf("%d %d",b,a);
	return 0;
}
