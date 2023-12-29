#include <iostream>
using namespace std;
int sum(int n)
{
    return (n*(n+1))/2;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int d,n;
        static int r;
        cin>>d>>n;
        if (d==1)
        {
            cout<< sum(n)<<endl;
        }
        else
        {
            r=n;
            int k=0;

            for (int i=0; i<d; i++)
            {
                r=sum(r);
            }
            cout<<r<<endl;
        }
    }
    return 0;
}