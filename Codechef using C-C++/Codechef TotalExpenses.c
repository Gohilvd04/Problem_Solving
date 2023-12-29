#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {

        float q,p;
        scanf("%f%f",&q,&p);
        float c= q*p;
        if(q>1000)
        {
            printf("%f\n",c*0.9);
        }
        else
        {
            printf("%f\n",c);
        }


    }
}