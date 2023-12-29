#include<stdio.h>

int main()

{

int num,i=0;

    printf("enter the number:");
    scanf("%d",&num);
    
    
do{
    i=i+1;
    printf("%d\n",i);

}while(i<num);
 
    return 0;
}