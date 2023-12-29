#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,last=0;
        cin>>n;
        last=n%10;
        while(n>9)
        {
            n=n/10;
        }
        cout<<last + n<<endl;
    }
    return 0;
}