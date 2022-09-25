#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
int countingValleys(int n,char*s)
{
	int c=0,v=0;
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='D')
		c--;
		else if(s[i]=='U')
		{
			c++;
			if(c==0&&s[i]=='U')
			v++;
		}
	}
	return v;
}
int main()
{
	int n;
	scanf("%i",&n);
	char* s=(char*)malloc(1000000*sizeof(char));
	scanf("%s",s);
	int result=countingValleys(n,s);
	printf("%d",result);
	return 0;
}

