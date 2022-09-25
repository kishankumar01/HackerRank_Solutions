#include<stdio.h>
int main()
{
	char str[10];
	int i;
	scanf("%s",&str);
	if((str[8]=='A'||str[8]=='a')&&(str[9]=='M'||str[9]=='m'))
	{
		if(str[1]=='2')
		{
			str[0]='0';
			str[1]='0';
			for(i=0;i<8;i++)
			printf("%c",str[i]);			
		}
		else
		{
			for(i=0;i<8;i++)
			printf("%c",str[i]);
		}
	}
	else if((str[8]=='P'||str[8]=='p')&&(str[9]=='M'||str[9]=='m'))
	{
		if(str[0]=='1'&&str[1]=='2')
		for(i=0;i<8;i++)
		printf("%c",str[i]);
		else
		{
			str[0]=str[0]+1;
			str[1]=str[1]+2;
			for(i=0;i<8;i++)
			printf("%c",str[i]);
		}
	}
	else
	{
		printf("WRONG INPUT");
	}
	return 0;
}
