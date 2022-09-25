#include<stdio.h>
int main()
{
	int n,k,i,e=100;;
	scanf("%d%d",&n,&k);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	i=0;
	do
	{
		e--;
		i=(i+k)%n;
		if(arr[i]==1)
		e=e-2;
	}
	while(i!=0);
	printf("%d",e);
	return 0;
}
