#include <iostream>
using namespace std;

void reverse(int num)
{
    bool count=false;
    while(num>0)
    {
        if(num%10==0 && !count)
        {
            num=num/10;
            continue;
        }
        cout<<num%10;
        num=num/10;
        count=true;
    }
    cout<<endl;
}
int main() {
int n;
    cin>>n;
    while(n>0)
    {
        int num;
        cin>>num;
        reverse(num);
        n--;
    }
	
	return 0;
}
