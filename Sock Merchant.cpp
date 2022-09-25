#include<stdio.h>
int main()
{
	int n,i,j,count=0;
	scanf("%d",&n);
	int c[n];
	for(i=0;i<n;i++)
	scanf("%d",&c[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(c[i]==c[j]&&c[j]>0)
			{
				count++;
				c[j]=0;
				break;
			}
		}
	}
	printf("%d",count);
	return 0;
}
