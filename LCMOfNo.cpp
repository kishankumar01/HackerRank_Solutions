#include<stdio.h>
int lcm(int a,int b)
{
	int i;
	for(i=a>b?a:b;i<=a*b;i=i+(a>b?a:b))
	{
		if(i%a==0&&i%b==0)
		break;
	}
	return i;
}
int main()
{
	int n,c=0,i;
	printf("Enter the Length=>");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	arr[i++]=0;
	c=lcm(arr[0],arr[1]);
	i=2;
	while(arr[i]!=0)
	{
			c=lcm(c,arr[i]);
			i=i+1;
	}
	printf("\nLCM=>%d",c);
	return 0;
}
