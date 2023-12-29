#include<stdio.h>

int main()
{
     int i, height, weight,count=0;
    
    for(i=1; i<=5; i++)
    {
    
    printf("enter height and weight of person %d:\n",i);
    scanf("%d%d",&height, &weight);
    
    if(height>170 && weight<50)
    {
       count++;
    }
    
    }
    
    printf("%d number of people having height greater than 170 and weight less than 50", count);
    
    return 0;
}