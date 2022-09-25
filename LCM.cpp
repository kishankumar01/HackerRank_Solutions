#include<stdio.h>
int lcm(int a,int b)
{
	int l;
	for(l=a>b?a:b;l<=a*b;l=l+(a>b?a:b))	
	if(l%a==0&&l%b==0)
	break;
	return l;
}
int main()
{
	int p,q,o;
	printf("Enter two no=>");
	scanf("%d\t%d",&p,&q);
	o=lcm(p,q);
	printf("LCM=>%d",o);
	return 0;
}

