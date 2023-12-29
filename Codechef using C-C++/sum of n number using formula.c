#include<stdio.h>
int add(int n)
{

    int sum=(n*(n+1))/2;

    return sum;

}

int main()
{
    int n,sum;

    printf("enter the num :");
    scanf("%d",&n);

    sum=add(n);
    printf("%d",sum);

    return 0;
}