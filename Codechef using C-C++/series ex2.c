#include<stdio.h>


int main()
{
    int i,n;
    float sum=0;

    printf("Enter the Number:");
    scanf("%d",&n);

    printf("sum of series:\n");
    for(i=1; i<=n; i++)
    {
        sum = sum + (float)1/i;

        if(i != n)
        {
            printf("1/%d+ ",i);
        }
        else
        {
            printf("1/%d= %f",i,sum);
        }
    }
}