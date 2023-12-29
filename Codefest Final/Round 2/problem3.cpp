#include<bits/stdc++.h>
using namespace std;

bool forRow(vector<vector<int>> &mat){
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            int temp = mat[i][j];
            for(int x=i+1,y=j+1; x<=4 && y<=5; x++,y++){
                cout << temp << " " << mat[i][j]<< endl;
                if(temp!=mat[i][j]) return false;
            }
        }
    }
    return true;
}
bool forCol(vector<vector<int>> &mat){
     for(int i=0; i<mat.size(); i++){
        int temp = mat[i][0];
        for(int j=i,k=i; j<4 && k<5; j++,k++){
            if(temp!=mat[j][k]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    // vector<vector<int>> mat ={{1 ,2, 3, 4, 8},{5, 1, 2, 3, 4},{4 ,5, 1, 2, 3},{7,4,5,1,2}};
    vector<vector<int>> mat ={{9 ,8, 7, 6, 5},{9, 9, 8, 7, 6},{9 ,9, 9, 8, 7},{9,9,9,8,8}};

    if(forRow(mat)){
        cout << "True";
    } else {
        cout << "False";
    }
}