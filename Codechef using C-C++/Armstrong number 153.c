#include<stdio.h>
int main()
{

    int n,rem,sum=0,i,temp;

    printf("Enter the number u want to check:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rem=n%10;
        i=rem*rem*rem;
        sum=sum+i;
        n=n/10;
    }
    n=temp;
    if(n==sum)
    {
        printf("it's Armstrong number\n");
    }
    else
    {
        printf("not Armstrong number");
    }
    return 0;
    }