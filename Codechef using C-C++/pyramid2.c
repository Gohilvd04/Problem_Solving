#include<stdio.h>

int main()
{
    int i, n, j;

    printf("enter the row number:");
    scanf("%d",&n);


    for(i=n; i>=1; i--)
    {
        for(j=i; j>=1; j--)
        {
            printf(" *");
        }
        
        printf(" \n");
    }

    return 0;
}