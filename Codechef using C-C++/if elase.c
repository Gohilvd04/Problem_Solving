#include<stdio.h>
#include<conio.h>

int main()
{    int age;
     printf("enter your age\n");
     scanf("%d",&age);
     printf("you have enter %d as your age \n",age);

     if(age>18){
     printf("you can vote \n");
}
    else{
    printf("you can't vote");
    return 0;
    }}