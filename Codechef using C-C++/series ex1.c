#include<stdio.h>


int main()
{
    int i,n;
    int sum=0;

    printf("Enter the Number:");
    scanf("%d",&n);

    printf("sum of series:\n");
    for(i=1; i<=n; i++)
    {
        sum = sum + pow(i,2);

        if(i != n)
        {
            printf("%d²+ ",i);
        }
        else
        {
            printf("%d²= %d",i,sum);
        }
    }
}