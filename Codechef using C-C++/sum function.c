#include<stdio.h>
int sum(int n)
{
    int k;
    k= ((n+1) * n)/2;

    return k;
}

int main()
{
    int i;
    printf("enter a number:");
    scanf("%d",&i);
    
    printf("\nthe sum of 1 to %d number is %d\n",i,sum(i));

}