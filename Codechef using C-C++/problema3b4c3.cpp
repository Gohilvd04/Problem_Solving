#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str;
    cin >> str;

    for (int i=0; i<str.length(); i++)
    {
        if (str[i]>=48 && str[i]<=57)
        {
            for (int j=1; j<str[i]-48 ; j++)
            {
               cout<<str[i-1];
            }
        }
        else
        {
            cout << str[i];
        }
    }
    return 0;
}