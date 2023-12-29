#include<stdio.h>

int main()
{
    int i,j;
    char c;
    c='A';
    

   // printf("enter the row number:");
   // scanf("%d",&n);


    for(i=5; i>=1; i--)
    {
        for(j=i; j>=1; j--)
        {
            printf("%c",c);
        }
        c++;
        printf(" \n");
    }

    return 0;
}