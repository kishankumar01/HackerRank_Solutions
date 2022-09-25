#include<stdio.h>
int main()
{
	int n,i,a,b,c,count=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		b=arr[i];
		count=0;
		while(arr[i]!=0)
		{
			a=arr[i]%10;
			if(a==0)
			{
			}
			else
			{
				c=b%a;
				if(c==0)
				count++;
			}
			arr[i]=arr[i]/10;
		}
		printf("%d\n",count);
	}
	return 0;
}
