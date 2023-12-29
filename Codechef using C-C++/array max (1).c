#include<stdio.h>

int main()
{
    int A[5];
    int max;

    for(int i=0; i<5; i++)
    {
        printf("Enter A[%d] :",i);
        scanf("%d",&A[i]);

    }

    max = A[0];

    for(int i=0; i<5; i++)
    {

        if(A[i]>max)
        {
            max= A[i];
        }

    }
    printf("\n max element is %d \n",max);


    return 0;
}