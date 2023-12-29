#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int x;
        cin>>x;
        if(x%10==0)
        {
            cout<<"0"<<endl;
        }
        else if((x*2)%10==0)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}