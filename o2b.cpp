#include<stdio.h>
void o2b(int);
int main()
{
	int n;
	printf("Enter the Octal No=");
	scanf("%o",&n);
	o2b(n);
	return 0;	
}
void o2b(int a)
{
	int r,n,arr[100],i;
	n=a;
	i=0;
	printf("No in Octal=%o\n",a);
	printf("No in Decimal=%d\n",a);
	for(i=0;n>0;i++)
	{
		 r=n%2;
		 arr[i]=r;
		 n=n/2;
	}
	i=i-1;
	printf("No in Binary=");
	for(;i>=0;i--)
	printf("%d",arr[i]);
}
