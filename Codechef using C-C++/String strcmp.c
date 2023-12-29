#include<stdio.h>
#include<string.h>

void main ()
{

char s1[20], s2[20];

printf("Enter s1:");
gets(s1);


printf("Enter s2:");
gets(s2);

if(strcmp(s1,s2)==0)
printf("both are same");
else 
printf("both are not same");


}