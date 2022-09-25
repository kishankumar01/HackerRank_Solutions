#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int x1,x2,v1,v2,a,b;
	a=b=0;
	scanf("%d\t%d\t%d\t%d",&x1,&v1,&x2,&v2);
	if(v1==0||v2==0)
	{
		printf("NO");
		return 0;
	}
	else
	{
			while(a<=99999999||b<=99999999)
			{
				a=x1+v1;
				b=x2+v2;
				if(a==b)
				{
					printf("YES");
					return 0;
				}
				x1=a;
				x2=b;
			}
			printf("NO");
			return 0;
	}
	return 0;
}
