#include<stdio.h>
void d2h(int);
int main()
{
	int n;
	printf("Enter the Decimal No=");
	scanf("%d",&n);
	d2h(n);
	return 0;	
}
void d2h(int a)
{
	int r,n,arr[100],i;
	n=a;
	i=0;
	printf("No in Decimal=%d\n",a);
	for(i=0;n>0;i++)
	{
		 r=n%16;
		 arr[i]=r;
		 n=n/16;
	}
	i=i-1;
	printf("No in Hexadecimal=");
	for(;i>=0;i--)
	printf("%d",arr[i]);
}
