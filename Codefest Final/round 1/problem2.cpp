#include<bits/stdc++.h>
using namespace std;

int main(){

    int a= 1250, b=1898;

    int sum = 0;
    for(int i=a+2; i<=b-2; i+=2){
        sum += i;
    }

    cout << sum;

    return 0;
}