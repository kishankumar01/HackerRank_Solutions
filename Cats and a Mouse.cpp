#include<stdio.h>
int main()
{
	int n,x,y,z,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d\t%d\t%d",&x,&y,&z);
    	if((x==z&&y==z)||(x==y))
    	printf("Mouse C\n");
    	else if((x==z&&y!=z)||(y<x&&x<z)||(x<y&&z<x))
    	printf("Cat A\n");
    	else if((y==z&&x!=z)||(x<y&&y<z)||(y<x&&z<y))
    	printf("Cat B\n");
    	else if(x<z&&z<y)
    	{
        	while((x!=z)||(y!=z))
        	{
            	x++;
            	y--;
        	}
        	if(x==z)
        	{
        		if(y==z)
        		printf("Mouse C\n");
        		else
        		printf("Cat A\n");
			}
        	else
        	printf("Cat B\n");
    	}
    	else if(y<z&&z<x)
    	{
        	while((x!=z)||(y!=z))
        	{
           		x--;
           		y++;
        	}	
        	if(x==z)
        	{
        		if(y==z)
        		printf("Mouse C\n");
        		else
        		printf("Cat A\n");
			}
        	else
      	 	printf("Cat B\n");
    	}
    	else
    	{
    	}
    }
    return 0;
}
