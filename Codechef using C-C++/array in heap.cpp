#include<iostream>
using namespace std;

int main()
{
int *p,n;
cin>>n;
p=new int[n];
p[1]=1,p[0]=2,p[2]=2;
for(int i=0; i<n; i++)
cout<<p[i];
delete[]p;
return 0;
}