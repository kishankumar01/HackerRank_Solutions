#include <stdio.h>
#include<stdlib.h>
int main()
{
 	char ch[5];
 	int n,arr[1000],i=0,j;
	do
	{
		gets(ch);
		n=atoi(ch);
		arr[i]=n;
		i++;
	}
	while(ch[0]!='q'); 
	i--;
	for(j=0;j<i;j++)
	if(arr[j]<0)
	return 0;
	for(j=0;j<i;j++)
	printf("%d,",arr[j]);
	return 0;
}
