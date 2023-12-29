#include <iostream>
using namespace std;

int main()
{
	int t,a,b;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	   cin>>a;
	   cin>>b;
	  
	   if(a<b)
	   {
	       cout<<"<\n";
	   }
	  else if(a>b)
	    {
	        cout<<">\n";
	    }
	    else
	    {
	        cout<<"=";
	    }
	}
	return 0;
}
