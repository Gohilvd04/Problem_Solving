#include<iostream>
using namespace std;

int main()
{
int *p;
int n;
cin>>n;
p=new int[n];
//p=(int *) malloc (n* sizeof(int));
p[0]=9;p[1]=10;p[2]=5;

for(int i=0; i<n;i++)
cout<<p[i]<<endl;
return 0;
}