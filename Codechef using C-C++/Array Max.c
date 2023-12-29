#include<stdio.h>

int main()
{
    int A[5];
    int i,max;

    for(i=0; i<5; i++)
    {
        printf("enter A[%d] :",i);
        scanf("%d",&A[i]);
        if(i==0)
        {
            max=A[i];
        }
        else
        {
            if(max<A[i])
            {
                max=A[i];
            }
        }
    }
    printf("max=%d",max);
    return 0;
}