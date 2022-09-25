#include<stdio.h>
int main()
{
  int n1,n2,num,count,i,j,k,arr[100],arr1[10000];
  scanf("%d%d",&n1,&n2);
  j=0;
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
	for(i=0;arr[i]!=0;i++)
	{
		printf("I=%d  %d,",i,arr[i]);
	}
	return 0;
}
