#include<stdio.h>
int main()
{
	int s,d,i,count=0,count1=0;
	scanf("%d%d",&s,&d);
	for(i=1;i<=s;i++)
	{
		if(i==d)
		{
			if(i%2==0&&i>0)
			count++;
			break;
		}
		else if(i%2==0&&i>0)
		count++;
		else
		{
		}
	}
	for(i=s;i>0;i--)
	{
		if(i==d&&i==s)
		{
			count1=0;
			break;
		}
		else if(i==d&&i==s-1&&i%2==0)
		{
			count1=0;
			break;
		}
		else if(i==d)
		{
			if(i%2==1)
			count1++;
			break;
		}
		else if(i%2==1&&i!=s)
		count1++;
		else
		{
		}
	}
	if(count>count1)
	printf("%d",count1);
	else
	printf("%d",count);
	return 0;
}
