#include<stdio.h>
#include<string.h>

void main ()
{

char s1[20], s2[20];

printf("Enter s1:");
gets(s1);

printf("Enter s2:");
gets(s2);

strcat(s1,s2);

printf("s1=%s",s1);
}