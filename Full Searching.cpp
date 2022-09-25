#include<stdio.h>
int main()
{
 	int i,j,n,count=1,k=1;
 	scanf("%d",&n);
 	int arr[n];
 	for(i=0; i<n;i++)
 	scanf("%d ",&arr[i]);
 	for(i=0;i<n;i++)
 	{
 		for(j=i+1;j<n;j++)
 		{
 			if((arr[i]==arr[j])&&(arr[i]>=0))
 			{
 				arr[j]=-1;
 				count++;
 				if(k==1)
				 {
				 	printf("Similar element : %d\n",arr[i]);
					printf("Positions : %d", i+1);
					k=0;
				}
 				printf(" %d",j+1);
 			}
 		}
 		if(count>1)
		printf("\nOccurence : %d\n", count);
 		count=1;k=1;
 	}
 	return 0;
}
