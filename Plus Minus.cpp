#include<stdio.h>
#define size 1000
int main()
{
	int arr[size],n,i;
	float a,b,c;
	a=b=c=0.0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		if(arr[i]>0)
		a=a+1;
		else if(arr[i]<0)
		b=b+1;
		else
		c=c+1;
	}
	a=a/n;
	b=b/n;
	c=c/n;
	printf("%6f\n%6f\n%6f",a,b,c);
	return 0;
}
