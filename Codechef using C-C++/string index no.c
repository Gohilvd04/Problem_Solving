#include<stdio.h>
#include<string.h>
void main()

{
    char S[20];
    char c;
    int i,flag=0,len;

    printf("Enter S :");
    gets(S);

    printf("Enter a character:");
    c=getchar();

    len= strlen(S);

    for(i=0; i<=len; i++)
    {
        if(S[i]==c) 
        {
            printf("\n %c is in index no. %d\n",c,i);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("%c is not present in string",c);
    }
}
