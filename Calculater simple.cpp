#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ch;
	float a=0,b=0,c=0;
	while(1)
	{
		printf("\n*******************************");
		printf("\n  ADDITION        Press-->  1");
		printf("\n  SUBTRACTION     Press-->  2");
		printf("\n  MULTIPLECTION   Press-->  3");
		printf("\n  DIVISION        Press-->  4");
		printf("\n  EXIT            Press-->  0");
		printf("\n*******************************");
		printf("\n\nEnter Your Choice==>>");
		scanf("%d",&ch);
		if(ch==0)
		{
			printf("\nThank You....\n");
			return 0;
		}
		else if(ch==2)
		{
			printf("Enter the 1st no==>");
			scanf("%f",&a);
			printf("Enter the 2st no==>");
			scanf("%f",&b);
			c=a-b;
			c=abs(c);
			printf("SUBRACTION==>%.2f",c);
		}
		else if(ch==1)
		{
			printf("Enter the 1st no==>");
			scanf("%f",&a);
			printf("Enter the 2st no==>");
			scanf("%f",&b);
			c=a+b;
			printf("SUM==>%.2f",c);
		}
		else if(ch==3)
		{
			printf("Enter the 1st no==>");
			scanf("%f",&a);
			printf("Enter the 2st no==>");
			scanf("%f",&b);
			c=a*b;
			printf("MULTIPLY==>%f",c);
		}
		else if(ch==4)
		{
			printf("Enter the no (Fortame is a/b)==>");
			scanf("%f",&a,&b);
			c=a/b;
			printf("DIVIDE==>%f",c);
		}	
		else
		printf("\nINVALIED INPUT....... \n 		PLEASE TRY AGAIN.....\n");
	}
	
	return 0;
}
