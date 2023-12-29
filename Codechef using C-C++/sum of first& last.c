#include<stdio.h>
int main()
{
int n,sum, rem;

printf("Enter the number:");
scanf("%d",&n);

rem = n%10;

while(n>10)
{
n=n/10;
}
sum = n+rem;

printf("\nSum of first and last digit of a number is %d\n",sum);



}