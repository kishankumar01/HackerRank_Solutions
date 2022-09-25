#include<stdio.h>
#include<stdlib.h>
void b2d(int,int);
int main()
{
	int arr[100],l,i;
	printf("Enter the length of the Binary No=");
	scanf("%d",&l);
	printf("Enter the No=");
	for(i=0;i<l;i++)
	scanf("%d",&arr[i]);
	b2d(arr[100],l);
	return 0;
}
void b2d(int arr1[100],int l1)
{
	int j,arr2[100],l2,l3,l4,sum;
	l4=l3=l2=l1;
	for(j=0;j<l2;j++)
	{
		arr2[j]=arr1[l4];
		l4--;
	}
	for(j=0;j<l2;j++)
	{
		sum=(sum+(arr2[j])*(2^l3));
	}
	printf("No in Decimal=%d",sum);
}
