#include<stdio.h>
int main()

{
    int a=5;
    int *ptr;
    int **ptr1;

    ptr = &a;

    ptr1 = &ptr;

    printf("a = %d",**ptr1);

    return 0;
}