#include<bits/stdc++.h>
using namespace std;

void recr(int idx, vector<int> &arr, vector<int> &temp, vector<vector<int>> &ans){
    if(idx==arr.size()){
        ans.push_back(temp);
        return;
    }
    temp.push_back(arr[idx]);
    recr(idx+1, arr, temp, ans);
    temp.pop_back();
    recr(idx+1, arr, temp, ans);
}

int main(){
    vector<vector<int>> ans;
    vector<int> temp;
    vector<int> arr = {1,2,3};

    recr(0, arr, temp, ans);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        } cout << endl;
    }
}