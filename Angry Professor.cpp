#include<stdio.h>
void display(int arr[],int c,int d);
int main()
{
	int n,i,a,b,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		int arr[a];
		for(j=0;j<a;j++)
		scanf("%d",&arr[j]);
		display(arr,a,b);
	}
	return 0;
}
void display(int arr[],int c,int d)
{
	int i,k=1,count=0;
	for(i=0;i<c;i++)
	if(arr[i]<k)
	count++;
	if(count>d||count==d)
	printf("NO");
	else
	printf("YES");
}
