#include<stdio.h>
void pri(int *num, int n)
{
	int i;
	for(i=0;i<n;i++)
	printf("%d",num[i]);
	printf("\n");
}
int main()
{
	int s,temp,i,j;
	scanf("%d",&s);
	int a[s];
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=1;j<=s;j++)
	{
		for(i=0;i<s-1;i++)
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			pri(a,s);
		}
	}
	return 0;
}
