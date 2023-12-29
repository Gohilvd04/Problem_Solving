#include<stdio.h>
int main(){
int A[10];
int n,i;
printf("Enter a number of table u want to print:");
scanf("%d",&n);

for(i=0; i<10; i++){

printf("\n%d x %d  = %d\n",n,i+1,(i+1) * n);

}

return 0;
}