#include<stdio.h>
void pri(int *num, int n)
{
	int i;
	for(i=0;i<2;i++)
	printf("%d",num[i]);
	printf("\n");
}
int main()
{
	int low,high,k,s,i,j,temp;
	scanf("%d\t%d",&low,&high);
	s=high-low;
	scanf("%d",&k);
	int arr[s];
	for(i=0;i<=s;i++)
	{
		arr[i]=low;
		low=low+1;
	}
	for(j=1;j<=s;j++)
	{
		for(i=0;i<s-1;i++)
		{
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			pri(arr,s);
		}
	}
	return 0;
}
