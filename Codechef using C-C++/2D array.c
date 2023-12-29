#include<stdio.h>
int main() {

    int A[3][5];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<5; j++)
        {

            printf("the marks of stdnt %d in sub %d is :\n",i+1,j+1);
            scanf("%d",&A[i][j]);

        }
    }
    printf("\nEntered details :\n");
    printf("\nStudents..... Sub........Marks\n");
    for(int i=0; i<3; i++) {
        printf("\n___________________________________\n");
        for(int j=0; j<5; j++) {
            //  printf("The Marks of Stdnt %d in Sub %d is %d\n",i+1,j+1,A[i][j]);
            printf("student %d---> sub %d ---> Marks %d \n",i+1,j+1,A[i][j]);
        }
    }

}