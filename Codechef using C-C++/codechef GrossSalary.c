#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        float sal;
        scanf("%f",&sal);

        if(sal>=1500)
        {
            printf("%0.2f\n",sal+(0.98*sal)+500);
        }
        else
        {
            printf("%0.2f\n",sal+(0.1*sal)+(0.90*sal));
        }
    }
    return 0;
}