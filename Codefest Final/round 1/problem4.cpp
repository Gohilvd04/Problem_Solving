#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {6, 12, 18, 24, 30};
    int T = 36;

    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i]+arr[j]==T){
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}