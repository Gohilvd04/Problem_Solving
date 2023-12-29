#include<stdio.h>
#include<string.h>

void main() {

    char S[20];
    int i,flag=0,len;
    char c;

    printf("Enter String:");
    gets(S);

    printf("Enter a char u want to find:");
    c = getchar();

    len= strlen(S);

    for(i=0; i<len; i++)
    {
        if(S[i]==c)
        {
            printf("char %c is found in index %d",c,i);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("char is not found in given string");
    }

}