#include<stdio.h>
#include<string.h>
int main()
{
	int t,m=0,l,i,arr[25];
	char s[9];
	for(i=0;i<26;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<26;i++)
	if(arr[i]>7)
	return 0;
	scanf("%s",s);
	l=strlen(s);
	if(l>10)
	return 0;
	for(i=0;i<l;i++)
	{
		t=s[i];
		t=t-97;
		t=arr[t];
		if(t>m)
		m=t;
	}
	l=l*m;
	printf("%d",l);
	return 0;
}
