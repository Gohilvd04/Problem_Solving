#include<stdio.h>

void main(){

float km,meter,feet,inch,cm;

printf("the value in km:");
scanf("%f",&km);

meter=1000*km;
feet=meter*3.281;
inch=feet*12;
cm=inch*2.54;

printf("meter=%f\n",meter);
printf("feet=%f\n",feet);
printf("inch=%f\n",inch);
printf("cm=%f\n",cm);

}

