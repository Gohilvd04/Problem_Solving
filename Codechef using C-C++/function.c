#include<stdio.h>

int sum(int a, int b);

int main() {
    int c;

    c =sum(5,7);

    printf("the sum = %d",c);

    return 0;
}

int sum(int a,int b)
{
    int c;
    c= a+b;

    return c;

}



