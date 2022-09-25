#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int s,t,a,b,m,n,count,count1,i;
	count=count1=0;
	scanf("%d\t%d",&s,&t);
	scanf("%d\t%d",&a,&b);
	scanf("%d\t%d",&m,&n);
	int apple[m],orange[n];
	for(i=0;i<m;i++)
	scanf("%d\t",&apple[i]);
	for(i=0;i<n;i++)
	scanf("\t%d",&orange[i]);
	for(i=0;i<m;i++)
	{
		apple[i]=apple[i]+a;
		if(apple[i]>=s&&apple[i]<=t)
		count=count+1;
	}
	for(i=0;i<n;i++)
	{
		orange[i]=orange[i]+b;
		if(orange[i]>=s&&orange[i]<=t)
		count1=count1+1;
	}
	printf("%d\n%d",count,count1);
	return 0;
}
