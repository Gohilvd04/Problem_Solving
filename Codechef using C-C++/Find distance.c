#include<stdio.h>

void main(){

float u,a,t,d;

printf("enter the initial velocity u=");
scanf("%f",&u);

printf("enter the time t=");
scanf("%f",&t);

printf("enter the Acceleration a=");
scanf("%f",&a);

d=(u*t+a*t*t/2);

printf("the distance d=%f",d);



}

    