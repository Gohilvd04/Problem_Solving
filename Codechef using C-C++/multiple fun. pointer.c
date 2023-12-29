#include<stdio.h>
void multiple(int *a)
{
*a=10*(*a);
}

int main()
{
   int a;
   printf("enter the number: ");
    scanf("%d",&a);
    printf("\nnumber before the function is %d\n",a);
    
    multiple(&a);
    printf("\nafter the function is %d",a);
    return 0;
}