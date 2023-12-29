#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    int A[t];
    for(int i=0; i<t; i++)
    {
        cin>>A[i];
    }
    int even=0,odd=0;
    for(int i=0; i<t; i++)
    {
        
        if(A[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if(even>odd)
    {
        cout<<"READY FOR BATTLE"<<endl;
    }
    else
    {
        cout<<"NOT READY"<<endl;
    }
    return 0;
}