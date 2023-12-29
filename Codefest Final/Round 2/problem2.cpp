#include<bits/stdc++.h>
using namespace std;

long long fib(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 2;
    }
    return fib(n-1) + fib(n-2);
}

int main(){
    long a = 1;
    long b = 2;
    long c; 

    for(int i=3; i<56; i++){
        c = (a + b); 
        a = b;
        b = c;
    }

    cout << c;
    // cout << fib(56);
}