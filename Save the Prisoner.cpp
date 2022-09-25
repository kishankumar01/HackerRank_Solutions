#include<stdio.h>
int main()
{
	int s,i,a;
	long long int n,m,k;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%lld%lld%d",&n,&m,&s);
		k=(m+s-1)%n;
		if(k==0)
		printf("%lld\n",n);
		else
		printf("%lld\n",k);
	}
	return 0;
}
