#include<stdio.h>
int main()
{
    int num;
    int *ptr;
    
    printf("Enter the table number:");
    scanf("%d",&num);
    
    printf("\n\n");
    
    ptr=(int*)malloc(10 * sizeof(int));

    for(int i=0; i<10; i++)
    {
        printf("%d x %d = %d\n",num,i+1, num*(i+1));

    }
    ptr = realloc(ptr,15 * sizeof(int));
    
    printf("\n______________________\n");
    
    for(int i=0; i<15; i++)
    {
        printf("%d x %d = %d\n",num,i+1, num*(i+1));

    }

}