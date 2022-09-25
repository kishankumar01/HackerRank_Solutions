#include<stdio.h>
int main()
{
	int n,a,b,c,i;
	printf("Enter the No=");                            
	scanf("%d",&n);										
	a=2;												
	b=3;
	c=a+b;								
	if(n==4||n==5)											
	printf("4");										
	else if(n>5)										
	{													
		for(;c<n;c=a+b)
		{
			if(i==c)
			{
				a=b;
				b=c;
			}
			else
			{
				for(i=b+1;i<c;i++)
					printf("%d,",i);
			}
			a=b;
			b=c;
		}
		for(i=i+1;i<=n;i++)
		{
			if(i==c)
				break;
			else
			printf("%d, ",i);
		}
	}		
	else		
	printf("\nINVALIED INPUT PLEASE TRY AGAIN.....");			
	return 0;			
}			
		

	
	
	
													
														
														
													
														
														
														
														
														
															
	

