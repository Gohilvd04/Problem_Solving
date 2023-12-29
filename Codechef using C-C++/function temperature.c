#include<stdio.h>
int celcius(int c);
int main()
{
    int c;
    printf("Enter temp in celcius:");
    scanf("%d",&c);

    printf("\nTemp in fahrenheit = %.2fF\n", celcius(c));

    printf("\n%d°C = %.2fF\n",c, celcius(c));
    return 0;
}
int celcius(int c)
{

    int fahrenheit;

    fahrenheit= (c * 1.8) + 32;

    return fahrenheit;


}