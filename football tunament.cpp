#include<stdio.h>
int main()
{
	int i,j,n,z,sum=0,x,y;
	char a,b;
	printf("Enter the total no of teams=>");
	scanf("%d",&n);
	if(n<=1)
	{
		printf("Some Thing is wrong.....\n");
		return 0;
	}
	else if(n==2)
	{
		printf("Enter the the Result(Formate A B 3 2):-\n");
		scanf("%c\t%c\t%d\t%d",&a,&b,&x,&y);
		if(x>y)
		{
			printf("Winner is ==>>%c with point is==>>%d",a,x);
			return 0;
		}	
		else if(x<y)
		{
			printf("Winner is ==>>%c with point is==>>%d",b,y);
			return 0;
		}
		else
		{
			printf("Match is tie..\n");
			return 0;
		}
	}
	else
	{
		z=n;
		z--;
		while(z>0)
		{
			sum=sum+z;
			z--;
		}
	}
	return 0;
}
