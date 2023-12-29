#include<stdio.h>

int main()
{
	   int i,n,fact=1;


    printf("enter n : ");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++)
    {
    
    fact= fact * i ;
    
    }
    printf("fact of %d is %d",n,fact);
    
    
	return 0;
}