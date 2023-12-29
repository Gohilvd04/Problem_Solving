#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,rem,sum=0;
        cin>>n;
        while(n>0)
        {
            rem=n%10;
            n=n/10;
            sum=sum + rem;
        }
        cout<<sum<<endl;
    }
    return 0;
}