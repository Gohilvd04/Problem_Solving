#include<stdio.h>
#include<math.h>
int fact(int n);

int main()
{
    int i,n;
    float sum=0;

    printf("Enter the Number:");
    scanf("%d",&n);

    printf("\nsum of series:\n");
    for(i=1; i<=n; i++)
    {
        sum = sum + 1.0/fact(i);

        if(i != n)
        {
            printf("1/%d!+ ",i);
        }
        else
        {
            printf("1/%d!= %f",i,sum);
        }
    }
}
int fact(int n)
{
    int fact=1;
    for(int i =1; i<n; i++)
    {
        fact = fact * i;
    }
    return fact;
}