#include<stdio.h>
void main() {

    int mul[10],n,i;
    printf("Enter num of table u want to print:");
    scanf("%d",&n);
    for(i=0; i<10; i++)
    {
        mul[i]=n*(i+1);


    }
    for(i=0; i<10; i++)
    {
        printf("%d x %d = %d\n",n,i+1,mul[i]);

    }

}