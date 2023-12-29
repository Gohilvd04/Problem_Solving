#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num, guess, no_of_guess=1;
    srand(time(0));//for random number
    num = rand()%100 + 1;
    do {
        printf("Enter the guess b/w 1 to 100:");
        scanf("%d",&guess);

        if(guess>num)
        {
            printf("Lower number please\n");
        }
        else if(guess<num)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("You guessed the number in %d guesses\n",no_of_guess);
        }
        printf("_________________________________\n");
        no_of_guess++;
    } while(num!=guess);

    return 0;
}
