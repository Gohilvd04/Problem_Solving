#include<stdio.h>

void main(){

float da, hra,pf, ma,of,gross,net,basic;


printf("enter basic:");
scanf("%f",&basic);

da=basic * 0.10;
hra=basic * 0.75;
ma=300;
pf=basic * 0.125;

gross=basic+da+hra+ma;

net=gross - pf;

printf("\n....................\n");
printf("\nda=%0.2f\n\n",da);
printf("hra=%0.2f\n\n",hra);
printf("ma=%0.2f\n\n",ma);
printf("pf=%0.2f\n\n",pf);
printf("gross sal=%0.2f\n\n",gross);
printf("net sal=%0.2f\n\n",net);
printf("\n...................\n");

}





    