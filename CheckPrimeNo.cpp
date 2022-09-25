#include<stdio.h>
int main()
{
	int n,i,count=0,ch;
	while(1)
	{
		printf("\nIf You Want to Continue==>>PRESS===>1\n\t\t\tElse PRESS===>>0\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			 printf("Enter the Number which is you want to check=>>");
			scanf("%d",&n);
			count=0;
			for(i=1;i<=n;i++)
			{
				if(n%i==0)
				count++;
			}
			if(count==2)
			printf("\n%d is a Prime Number\n",n);
			else
			printf("\n%d is not a Prime Number\n",n);
		}
		else if(ch==0)
		return 0;
		else
		{
			printf("\nINVALID INPUT.....TRY AGAIN...\n");
			ch=1;
		}
	}
	return 0;
	
}
