
#include<stdio.h>
void main()
{
    int a;
    int x,y,z;
    
    scanf("%d",&a);
    
    for(int i=0; i<a; i++)
    {      
        scanf("%d%d%d",&x,&y,&z);
       
        int c=(y-x)/z;
        printf("%d",c);
        printf("\n_______________________\n");
    }
    return 0;
}