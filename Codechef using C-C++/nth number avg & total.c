#include<stdio.h>

int main()
{
	  int choice, n,total=0,count=0;
   float avg;

do 

{
printf("enter a number:");
scanf("%d",&n);

total=total+n;
count++;

printf("do u want to continue?(1/0):");
scanf("%d",&choice);
	
}while(choice == 1);

avg= total/count;

printf("total =%d",total);
printf("\navg=%f",avg);

	return 0;
}