#include<stdio.h>

int main()
{
    int A[10];
    int i,odd=0,even=0;

    for(i=0; i<10; i++)
    {
        printf("Enter A[%d]:",i);
        scanf("%d",&A[i]);

    }
    printf("\n______________________\n");
    for(i=0; i<10; i++)
    {
        if(A[i]%2==0){
            printf("\n %d is even",A[i]);
        even++;}
        else{
            printf("\n %d is odd ",A[i]);
        odd++;}
    }

    printf("\nthe count of even is = %d \n",even);
    printf("\nthe count of odd number is = %d \n",odd);
    return 0;
}