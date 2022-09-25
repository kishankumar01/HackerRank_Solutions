#include<stdio.h>
int main()
{
	int n,a[200],c,t,i;
	scanf("%d",&n);
	a[0]=1;
	c=0;
	for(;n>1;n--)
	{
		t=0;
		for(i=0;i<=c;i++)
		{
			t=(a[i]*n)+t;
			a[i]=t%10;
			t=t/10;
		}
		while(t>0)
		{
			a[++c]=t%10;
			t=t/10;
		}
	}
	for(i=c;i>=0;i--)
	printf("%d",a[i]);
	return 0;
}
