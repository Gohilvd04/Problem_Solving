#include <stdio.h>

int main(){

int rev=0, rem, n;
printf("enter the number:");
scanf("%d",&n);

while(n>0){

 rem = n%10;
 n=n/10;

 rev=rev*10+rem;


}

printf("the reverse of the number is %d",rev);



}