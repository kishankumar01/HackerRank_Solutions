#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[100],t[100];
	int k,i,a,b,c=0,j=0,count=0;
	gets(s);
	gets(t);
	scanf("%d",&k);
	a=strlen(s);
	b=strlen(t);
	for(i=0;i<a;i++)
	{
		if(s[i]==t[i])
		{
			j=i;
			while(s[j]==t[j])
			{
				if(s[j]=='\0')
				break;
				count++;
				j++;
			}
			break;
		}
	}
	a=abs(a-count);
	b=abs(b-count);
	c=a+b;
	if(c<k)
	printf("Yes");
	else
	printf("No");
	return 0;
}
