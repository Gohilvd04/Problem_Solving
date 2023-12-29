#include<stdio.h>

int main()
{
    int A[20][2];
    int i,j;
    
    
    
    for(i=0; i<20; i++)
    {
    
    printf("Enter Roll no. of student %d:",i+1);
    scanf("%d",&A[i][0]);
    
    printf("Enter Marks of student %d:",i+1);
    scanf("%d",&A[i][1]);  
    
    printf("\n");
    }
    
    printf("\n_________________________________\n");
    printf("\nStudents Details :\n");
    printf("\nRoll no.   Marks \n");
    printf("\n_________________________________\n");
    
    for(i=0; i<20; i++)
    {
    printf("%d\t    %d\n",A[i][0],A[i][1]);
    }
    

    return 0;
}