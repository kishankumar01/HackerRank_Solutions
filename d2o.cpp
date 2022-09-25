#include<stdio.h>
void d2o(int);
int main()
{
	int n;
	printf("Enter the Decimal No=");
	scanf("%d",&n);
	d2o(n);
	return 0;	
}
void d2o(int a)
{
	int r,n,arr[100],i;
	n=a;
	i=0;
	printf("No in Decimal=%d\n",a);
	for(i=0;n>0;i++)
	{
		 r=n%8;
		 arr[i]=r;
		 n=n/8;
	}
	i=i-1;
	printf("No in Octal=");
	for(;i>=0;i--)
	printf("%d",arr[i]);
}
