class Solution {
  public:
    bool checkDuplicates(vector<int> &arr) {
        // code here
        int n = arr.size();
        unordered_set<int> st;
        
        for(int i = 0; i<n; i++){
            if(st.find(arr[i]) != st.end()){
                return true;
            }else{
                st.insert(arr[i]);
            }
        }
        return false;
    }
};


/*
class Solution {
  public:
    bool checkDuplicates(vector<int> &arr) {
        // code here
        int n = arr.size();
        for(int i = 0; i<n; i++){
            for(int j = i + 1; j<n; j++){
                if(arr[i] == arr[j]){
                    return true;
                }
            }
        }
        return false;
    }
};
*/