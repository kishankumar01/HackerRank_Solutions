#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("\t%d",&arr[i]);
	for(i=0;i<n;i++)
	printf("\tValue%d\tI==>%d",arr[i],i);
	arr[i]=10;
	printf("\nARR[I]==>%d\tI==>%d",arr[i],i);
	arr[++i]=20;
	printf("\nARR[++I]==>%d\tI==>%d",arr[i],i);
	arr[i++]=30;
	printf("\nARR[I++]==>%d\tI==>%d",arr[i],i);
	printf("\n\n");
	for(i=0;i<=7;i++)
	printf("%d\n",arr[i]);
	return 0;
}
