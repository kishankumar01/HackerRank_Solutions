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
	int n,m,d,c=0,i,j,count=0;
	scanf("%d\t%d",&n,&m);
	int arr[n],arr1[m];
	for(i=0;i<n;i++)
	scanf("\t%d",&arr[i]);
	arr[i]=0;
	for(j=0;j<m;j++)
	scanf("\t%d",&arr1[j]);
	arr1[j]=0;
	if(n==1&&m==1)
	{
		if(arr[0]==arr1[0])
		{
			printf("1");
			return 0;
		}
		else if(arr[0]>arr1[0])
		{
			printf("0");
			return 0;
		}
		else
		c=n;
	}
	else if(n==1)
	c=n;
	else
	{
		c=lcm(arr[0],arr[1]);
		i=2;
		while(arr[i]!=0)
		{
			c=lcm(c,arr[i]);
			i=i+1;
		}
	}
	for(i=c;i<=arr1[0];i=i+c)
	{
		for(j=0;j<m;j++)
		{
			d=arr1[j]%i;
			if(d==0)
			continue;
			else
			break;
		}
		if(d==0&&arr1[j]==0)
		count=count+1;
	}
	printf("%d",count);
	return 0;
}
