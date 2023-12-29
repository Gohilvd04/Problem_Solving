#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,len;
    char s1[10],s2[10];

    printf("Enter String:");
    gets(s1);

    len=strlen(s1);

    for(i=len-1,j=0; i>=0; i--,j++)
    {
        s2[j]=s1[i];

    }
    s2[j]='\0';

    strcpy(s1,s2);
    printf("s1 = %s",s1);

    return 0;
}