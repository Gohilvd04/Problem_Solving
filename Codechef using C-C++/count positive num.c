#include<stdio.h>
int main()
{
    int count=0,i,n;
    int A[10];

    for(i=0; i<10; i++)
    {
        printf("\nEnter the Number:");
        scanf("%d",&A[i]);

        if(A[i]>0)
        {
            count++;
        }
    }

    {
        printf("\nthe count of positive number is %d\n", count);
    }

}