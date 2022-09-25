#include<stdio.h>
int main()
{
	int a;
	float b,n;
	printf("-----------------------------\n");
	printf("   Enter 1 for Exit......!!!!\n");
	printf("-----------------------------\n");
	while(1)
	{
	printf("Enter the No=>");
	scanf("%f",&n);
	
		if (n==1)
		return 0;
		else
		{
	a=n;
	b=n-a;
	printf("A=%d\nB=%.2f\nN=%.2f",a,b,n);
	if(b==0)
	printf("\n%.2f No is Integer\n",n);
	else
	printf("\n%.2f No is Floating Point\n",n);
}
}
	return 0;	
}
