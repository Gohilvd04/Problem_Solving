#include<stdio.h>

int main()
{
     int stdnt,m1,m2,m3,total;
     float avg;
    
    
    for(stdnt=1; stdnt<=5; stdnt++)
    {
    printf("\n-----------------------------\n");
    
    printf("Enter m1 m2  m3 of student %d: \n",stdnt);
    scanf("%d%d%d",&m1,&m2,&m3);
    
    
    
     total=m1+m2+m3;
   
     avg= total/3.0;
    
    printf("student :%d",stdnt);
    printf("\n total :%d",total);
    printf("\n average :%0.2f",avg);
    
    }
    
    
    return 0;
}