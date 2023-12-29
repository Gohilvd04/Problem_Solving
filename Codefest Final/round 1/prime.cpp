#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    int i=2;

    while(i<num){
        if(num%i==0){
            return false;
        }
        i++;
    }

    return true;
}

int main(){
    int arr[] = {102877, 99679, 99054, 88512, 91577};

    for(int i=0; i<5; i++){
        if(isPrime(arr[i])){
            cout << "True" << endl;
        }else {
            cout << "False" << endl;
        }
    }
}