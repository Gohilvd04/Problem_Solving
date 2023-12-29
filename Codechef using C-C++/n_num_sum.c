#include<stdio.h>
int add(int n)
{
    int s=0;

    for(int i=1; i<=n; i++)
    {
        s=s+i;
    }

    return s;

}

int main()
{
    int n,sum;

    printf("enter the num :");
    scanf("%d",&n);

    printf("%d",add(n));

    return 0;
    
}