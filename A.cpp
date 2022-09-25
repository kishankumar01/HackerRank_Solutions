#include<stdio.h>
int cheakprim(int n)
{
	int i,z=0,flag=0;    
	z=n/2;    
	for(i=2;i<=z;i++)    
	{    
		if(n%i==0)    
		{		    
			return 0;  
			flag=1;    
			break;    
		}    
	}    
	if(flag==0)    
	return 1;      
}
int cal(int a,int b)
{
	int i,p,q;
	for(i=a/2;i>=b;i--)
	{
		p=a/i;
		q=a%i;
		if(q==0)
		break;
	}
	return i;
}
int main()
{
	int m,n,c,d,e,i,count=1;
	scanf("%d\t%d",&m,&n);
	if(m==n)
	{
		printf("0");
		return 0;
	}
	else if(m*m==n)
	{
		printf("1");
		return 0;
	}
	else
	{
		count=count+1;
		while(m>=n)
		{
			c=cheakprim(m);
			if(c==1)
			{
				d=cheakprim(n);
				if(d==1)
				{
					count=count+1;
					printf("%d",count);
					return 0;
				}
				else
				{
					count=1;
					while(n>1)
					{
						n=n/2;
						count=count+1;
					}
					printf("%d",count);
					return 0;
				}
			}
			else
			{
				d=cal(m,n);
				e=cheakprim(d);
				if(e==1)
				{
					d=cheakprim(n);
					if(d==1)
					{
						//printf("3");
						count=count+1;
						printf("%d",count);
						return 0;
				}
				else
				{
					count=1;
					while(n>1)
					{
						n=n/2;
						count=count+1;
					}
					printf("%d",count);
					return 0;
				}	
			}
		}
	}
}
	return 0;		
}

