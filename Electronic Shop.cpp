#include<stdio.h>
int main()
{
	int s,n,m,i,j,max=0,sum=0;
	scanf("%d\t%d\t%d",&s,&n,&m);
	int k[1000],u[1000];
	for(i=0;i<n;i++)
	scanf("\t%d",&k[i]);
	for(i=0;i<m;i++)
	scanf("\t%d",&u[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			sum=k[i]+u[j];
			if(max<sum&&sum<=s)
			max=sum;
		}
	}
	if(max==0)
	printf("-1");
	else
	printf("%d",max);
	return 0;
}
