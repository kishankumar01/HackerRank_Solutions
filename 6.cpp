#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,l;
    int freq[256] = {0};
    gets(str);
    l=strlen(str);
    if(l>20)
    {
    	printf("Wrong Input");
    	return 0;
	}
    for(i = 0; str[i] != '\0'; i++)
    freq[str[i]]++;
    for(i = 0; i < 256; i++)
    {
        if(freq[i] == 1)
        printf(" %c ", i);
        else
        {
        	printf("Exceptional String");
        	break;
        }
    }
    return 0;
}
