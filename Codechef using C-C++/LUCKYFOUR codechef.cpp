#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,count=0;
        cin>>n;
        while(n>0)
        {       
            if(n%10==4)
            {
                count++;        
            }
            n=n/10;
        }
     cout<<count<<endl;
    }
    return 0;
}