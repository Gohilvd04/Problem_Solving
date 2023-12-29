#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int fact=1;
        int n;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            fact=fact*i;          
        }
        cout<<fact<<endl;
    }
    return 0;
}