#include<stdio.h>
int main()
{
	int n,k,q,i,j,c,temp;
	scanf("%d%d%d",&n,&k,&q);
	int a[n],qa[q];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<q;i++)
	scanf("%d",&qa[i]);
	for(i=0;i<k;i++)
	{
		temp=a[n-1];
		for(j=n-1;j>=0;j--)
		a[j]=a[j-1];
		a[0]=temp;
	}
	for(i=0;i<q;i++)
	{
		c=qa[i];
		printf("%d\n",a[c]);	
	}
	return 0;
}
