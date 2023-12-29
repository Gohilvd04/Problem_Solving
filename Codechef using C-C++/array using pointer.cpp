#include<iostream>
using namespace std;

int main()
{
int *p;
int arr[5]={2,4,6,8,10};

p=arr;

for(int i=0; i<5;i++)
cout<<p[i]<<endl;
return 0;
}