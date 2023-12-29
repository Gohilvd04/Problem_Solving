#include<stdio.h>
//void sumAndavg(int a,int b, int*sum, float*avg);
void sumAndavg(int a,int b, int*sum, float*avg) {

    *sum= a + b;

    *avg = *sum/2.0;

}
void main()
{
    int i, j, sum;
    float avg;
    printf("Enter i:");
    scanf("%d",&i);

    printf("Enter j:");
    scanf("%d",&j);
    
    sumAndavg(i,j, &sum, &avg);

    printf("The sum is %d\n",sum);

    printf("\nThe average is %.2f\n",avg);

}