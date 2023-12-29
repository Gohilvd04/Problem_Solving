#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        char c;
        cin>>c;

        if(c==98 || c==66)
        {
            cout<<"BattleShip"<<endl;
        }
        else if(c==99 || c==67)
        {
            cout<<"Cruiser"<<endl;
        }
        else if(c==100 || c==68)
        {
            cout<<"Destroyer"<<endl;
        }
        else if(c==102 || c==70)
        {
            cout<<"Frigate"<<endl;
        }

    }

return 0;
}