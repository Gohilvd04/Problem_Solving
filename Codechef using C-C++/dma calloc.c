#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int *ptr;

    printf("Enter the size of array :");
    scanf("%d",&n);

    ptr= (int*)calloc(n , sizeof(int));
    for(int i =0; i<n; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("array:....");

    for(int i=0; i<n; i++)
    {

        printf("%d",ptr[i]);

    }
    free(ptr);
    return 0;
}