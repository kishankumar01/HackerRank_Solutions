#include<stdio.h>
int main()
{
	int n,j,k,c,d;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	j=1;
	while(j!=n+1)
	{
		for(i=0;i<n;i++)
		if(j==arr[i])
		c=i+1;
		for(k=0;k<n;k++)
		if(c==arr[k])
		d=k+1;
		j++;
		printf("%d\n",d);
	}
	return 0;
}
