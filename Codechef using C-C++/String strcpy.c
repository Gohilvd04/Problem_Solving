#include<stdio.h>
#include<string.h>

void main ()
{

char s1[20], s2[20];

printf("Enter s1:");
gets(s1);

printf("Enter s2 :");
gets(s2);

strcpy(s2,s1);

printf("s2= %s",s2);
}