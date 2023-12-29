#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,len;
    char s[10],ch;

    printf("Enter String:");
    gets(s);

    len=strlen(s);

    for(i=0; i<len/2; i++)
    {
        ch = s[i];
        
        s[i]=s[len-1-i];
        
        s[len-1-i]=ch;
    }
    printf("reverse string =%s",s);

    return 0;
}