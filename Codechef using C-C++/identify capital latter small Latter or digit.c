#include <stdio.h>

void main(){

char c;

printf("enter a character:");
scanf("%c",&c);


if(c >= 65 && c <=90){

printf("it is capital latter");

}

else if(c >=97 && c <=122){

printf("it is small Latter");

}

else if(c>= 48 && c<=57){

printf("it is digit");

}
else

printf("it is a special character");







}