#include<stdio.h>
void swap(int *a, int *b);

void main()
{

    int a=3, b=4;

    printf("a and b before the swap : %d %d",a,b);
    swap(&a, &b);
    printf("\n a and b after the swap : %d %d",a,b);

}
swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;


}