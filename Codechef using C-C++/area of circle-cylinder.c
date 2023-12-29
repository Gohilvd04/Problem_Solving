#include<stdio.h>

int main(){
    //Find area of the Circle
    
    int r,h;
    float pi=3.14;
    
    printf("enter the radius of the Circle\n",r);
    scanf("%d",&r);
    
    printf("the area of circle is %f\n", pi*r*r);
    
    printf("enter the height of the cylinder\n",h);
    scanf("%d",&h);
    
    printf("the area of the cylinder is %f", pi*r*r*h);
    
     return 0;
}