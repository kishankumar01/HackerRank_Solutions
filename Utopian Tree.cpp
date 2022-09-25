#include<stdio.h>
int main()
{
	int h=0,t,i,j,p=1;
	scanf("%d",&t);
	int arr[t];
	for(i=0;i<t;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<t;i++)
	{
		if(arr[i]==0)
		printf("1\n");
		else
		{
			j=0;
			do
			{
				j++;
				if(j%2==0)
				{
					p=p+1;
				}
				else
				{
					p=p*2;
				}
			}
			while(j!=arr[i]);
			printf("%d\n",p);
			p=1;
		}
	}
	return 0;
}
