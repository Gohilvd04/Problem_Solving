#include<stdio.h>

void main()
{
int choice;
float amount, result;

printf("1.for Dollar:\n");
printf("2.for Euro:\n");

printf("enter amount:\n",amount);
scanf("%f",& amount);
printf("enter your choice:\n", choice);
scanf("%d", &choice);
switch(choice){
case 1:
    result=amount/70;
    printf("%f amount is equal to %f Dollar",amount,result);
    break;
    
case 2:
    result=amount/92;
    printf("%f amount is equal to %f Euro", amount, result);
    break;
    
default:
    printf("invalid choice");
    return 0;
    }
}