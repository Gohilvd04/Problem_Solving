#include<stdio.h>
#include<string.h>
int main()
{

    char arr[6];
    char c,d;

    gets(arr);

    printf("enter a character to replace : ");
    c=getchar();

    fflush(stdin);

    printf("enter a character by replace : ");
    d=getchar();

    fflush(stdin);

    for (int i = 0; i < 6; i++)
    {
        if (arr[i]==c)
        {
            arr[i]=d;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%c",arr[i]);
    }

    return 0;
}