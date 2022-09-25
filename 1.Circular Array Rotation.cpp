#include<stdio.h>
int main()
{
	int n,k,q,i,j,c,temp;
	scanf("%d%d%d",&n,&k,&q);
	int a[n],b[n],qa[q];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<q;i++)
	scanf("%d",&qa[i]);
	j=n-k;
	for(i=0,j;j<n;j++,i++)
	b[i]=a[j];
	for(j=0;j<n-k;j++,i++)
	b[i]=a[j];
	for(i=0;i<q;i++)
	{
		c=qa[i];
		printf("%d\n",b[c]);	
	}
	return 0;
}
