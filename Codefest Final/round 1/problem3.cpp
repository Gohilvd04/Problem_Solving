#include<bits/stdc++.h>
using namespace std;

int main(){
    string a = "Aliquam erat volutpat. Etiam eu ligula ligula.";
    string b = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";

    map<char, int> mp1;
    map<char, int> mp2;

    for(int i=0; i<a.length(); i++){
        mp1[a[i]]++;
    }
    for(int i=0; i<a.length(); i++)
        mp2[b[i]]++;

    for(auto it: mp1){
        if(mp1[it.first]<=mp2[it.first]){
            cout << it.first << " ";
        }
    }
}