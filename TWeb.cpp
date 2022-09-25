#include<stdio.h>
int main()
{
	int arr[]={3, 20, 4, 5,18,6, 7, 8, 10, 58,62};
	int i,l,m,s,sk=4,j,t;
	s=0;
	l=11;
	m=(s+l)/2;
	for(i=0;i<11;i++)
	for(j=i+1;j<11;j++)
	{
		if(arr[i]>arr[j])
		{
			t=arr[i];
			arr[i]=arr[j];
			arr[j]=t;
		}
	}
	while(s<=l)
	{
		if(arr[m]<sk)
		s=m+1;
		else if(arr[m]==sk)
		{
			printf("Found at index %d",m+1);
			break;
		}
		else
		l=m-1;
		m=(s+l)/2;
	}
	if(s>l)
	printf("Not Fount");
	
	return 0;	
}
