#include<stdio.h>

int main()
{
     int i, n, count=0;
    
    printf("enter a number:");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
    {
    
    if(n%i==0)
    
    count++;
    
    }
    if(count==2)
    
    printf("it is prime number");
    
    else 
    
    printf("not a prime number");
    
    return 0;
}