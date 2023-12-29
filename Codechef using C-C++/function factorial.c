#include<stdio.h>

int factorial(int x);

int main() {
    int a=5;
    
    printf("\n---> the factorial of %d is %d. \n",a, factorial(a));
    //printf("\n%d! = %d\n",a, factorial(a));
    return 0;
}

int factorial(int x)
{
printf("calling factorial(%d)\n",x);// if we want to call the factorial ✌🏻
    if(x==1 || x==0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x-1);
    }

}



