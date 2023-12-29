#include<stdio.h>

int isPrime(int n)
{
    int isPrime=1;

    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            isPrime=0;
            break;
        }

    }
    return isPrime;

}
void main()
{

    int n,flag;

    printf("Enter number:");
    scanf("%d",&n);

    flag= isPrime(n);

    printf("%d", flag);

}

    