#include<stdio.h>
int main()
{
	int a,b,c,d=0,e,i;
	scanf("%d%d",&a,&b);
	c=a*b;
	int arr[c];
	for(i=0;i<c;i++)
	scanf("%d",&arr[i]);
	while(d!=b)
	{
		e=arr[d];	
		for(i=d+b;i<c;i=i+b)
		if(e>arr[i])
		e=arr[i];
		printf("%d ",e);
		d=d+1;
	}
	return 0;
}
