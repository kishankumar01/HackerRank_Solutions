#include<stdio.h>
int main()
{
	int n,i,count=0,a1=0,a2=0,a3=0,a4=0,a5=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("\t%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		if(arr[i]==1)
		a1++;
		if(arr[i]==2)
		a2++;
		if(arr[i]==3)
		a3++;
		if(arr[i]==4)
		a4++;
		if(arr[i]==5)
		a5++;
	}
	printf("%d\t%d\t%d\t%d\t%d\n",a1,a2,a3,a4,a5);
	if(a1!=0)
	count++;
	if((a2==1)||a2!=0&&a2!=a1)
	count++;
	if((a3==1)||a3!=0&&a3!=a1&&a3!=a2)
	count++;
	if((a4==1)||a4!=0&&a4!=a1&&a4!=a2&&a4!=a3)
	count++;
	if((a5==1)||a5!=0&&a5!=a1&&a5!=a2&&a5!=a3&&a5!=a4)
	count++;
	printf("%d",count);
	return 0;
}
