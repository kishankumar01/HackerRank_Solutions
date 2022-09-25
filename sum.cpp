#include<stdio.h>
int main()
{
  int n1,n2,num,count,i,j,k,temp,arr[100],arr1[10000],smaller_no,largest_no,flag;
  scanf("%d%d",&n1,&n2);
  j=0;
  flag=0;
  for(num=n1;num<=n2;num++)
  {
		count = 0;
		for(i=2;i<=num/2;i++)
    	{
             	if(num%i==0)
			 	{
                 	count++;
                 	break;
             	}
    	}
        if(count==0 && num!= 1)
        {	
             arr[j]=num;
             j++;
    	}
	}
	arr[j]='\0';
	for(i=0;arr[i]!='\0';i++)
	{
		printf("%d,",arr[i]);
	}
	printf("\n");
	j=0;
	for(i=0;arr[i]!='\0';i++)
	{
		for(k=0;arr[k]!='\0';k++)
		{
			if(i!=k)
			{
				if(arr[k]<10)
				{
					arr1[j]=arr[i]*10+arr[k];
					j++;
				}
				else
				{
					arr1[j]=arr[i]*100+arr[k];
					j++;
				}
			}
			
		}
	}
	arr1[j]='\0';
	for(i=0;arr1[i]!='\0';i++)
	printf("%d,",arr1[i]);
	printf("\n");
	for(i=0;arr1[i]!='\0';i++)
  	{
    	for(k=0;arr1[k]!='\0';k++)
    	{
      		if(arr1[k]>arr1[k+1]) 
      		{
        		temp       = arr1[k];
        		arr1[k]   = arr1[k+1];
        		arr1[k+1] = temp;
      		}
    	}
  	}
  	for(i=0;arr1[i]!='\0';i++)
	printf("%d,",arr1[i]);
	printf("\n");
	j=0;
	for(num=arr1[j];arr1[j]!='\0';j++)
	{
		for(i=2;i<num/2; i++) 
		{
      		if(num%i == 0) 
			{
         		flag = 1;
         		break;
      		}
   		}
   		if(flag == 0) 
   		{		
    		smaller_no=num;
    		break;
		}
	}
	for(num=arr1[k];k!=0;k--)
	{
		for(i=2;i<num/2; i++) 
		{
      		if(num%i == 0) 
			{
         		flag = 1;
         		break;
      		}
   		}
   		if(flag == 0) 
   		{		
    		largest_no=num;
    		break;
		}
	}
	
	return 0;
}
             
