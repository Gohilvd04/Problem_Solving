#include<stdio.h>
int positive(int arr[],int n) {
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            count++;
        }

    }

    return count;
}
int main(){


    // int n;
    int pos;
    //printf("enter the number: ");
    //scanf("%d",&n);

    int arr[10];
    for(int i=0; i<10; i++)
    {
        printf("Enter the Number:");
        scanf("%d",&arr[i]);
    }
    pos=positive(arr,10);

    printf("the count of positive number is %d",pos);


    return 0;
}