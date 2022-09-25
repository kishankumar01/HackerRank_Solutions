#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,s,a,in=0,f,r=0,n,count=0;
	float g,p=0;
	scanf("%d%d%d",&i,&j,&k);
	s=j-i;
	int arr[s];
	for(a=i;a<=j;a++)
	{
		arr[in]=a;
		in++;
	}
	for(a=0;a<=s;a++)
	{
		f=arr[a];
		g=f;
		n=0;
		r=0;
		while(f!=0)
		{
			n=f%10;
			r=r*10+n;
			f=f/10;
		}
		g=abs(g-r);
		g=g/k;
		n=g;
		p=g-n;
		if(p==0)
		count++;
	}
	printf("%d",count);
	return 0;
}
