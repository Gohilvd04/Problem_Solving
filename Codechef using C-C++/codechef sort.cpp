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
    for(int i=0; i<t-1; i++)
    {
        for(int j=i+1; j<t; j++)
        {
            if(A[i]>A[j])
            {
                int temp;
                temp = A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }

    }
    for(int i=0; i<t; i++)
    {
        cout<<A[i]<<endl;
    }
}