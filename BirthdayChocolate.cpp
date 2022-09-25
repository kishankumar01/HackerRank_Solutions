#include<stdio.h>
int main()
{
	int n,i,j,d,m,sum,count=0,t;
	scanf("%d",&n);
	int s[n];
	for(i=0;i<n;i++)
	scanf("%d\t",&s[i]);
	scanf("%d\t%d",&d,&m);
	t=m;
	for(i=0;i<=n-m;i++)
	{
		sum=0;
		for(j=i;j<t;j++)
		{
			sum=sum+s[j];
		}
		if(sum==d)
		count=count+1;
		t=t+1;
	}
	printf("%d",count);
	return 0;
}
