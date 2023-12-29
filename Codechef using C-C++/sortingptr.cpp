#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;

    int *p;
    p=new int[n];

    for (int i=0; i<n; i++)
    {
        cin>>p[i];
    }
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (p[i]>p[j])
            {
                int temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    for (int i=0; i<n; i++)
    {
        cout<<p[i]<<" ";
    }

    return 0;
}