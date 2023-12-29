#include<stdio.h>

int main()
{
	int person,count=0,count1=0,count2=0;

    printf("enter the number of person: ");
  scanf("%d",&person);

	

	int age[person];
	int day,total;
	int luggege;
	int sum,sum1,sum2,i;

    printf("\nentre youe total luggage weight: ");
  scanf("%d",&luggege);

  printf("\nHow long you stay want: ");
  scanf("%d",&day);

	
	for(i=0;i<person;i++)
	{
		
         printf("enter %d person age: ",i+1);
         scanf("%d",&age[i]);
	}
	for(i=0;i<person;i++)
	{
		if(age[i]<18)
		{
		    count++;
		}
		else if(age[i]>60)
		{
			count1++;
		}
		else 
		{
			count2++;
		}
	}
	sum=count*day*300;
	sum1=count1*day*200;
	sum2=count2*day*500;
	if(luggege>20)
	{
		 total=sum+sum1+sum2+400;
	}
	else
	{
		total=sum+sum1+sum2;
	}
    printf("\nyour total bill is %d rupees only",total);

	
	return 0;
}