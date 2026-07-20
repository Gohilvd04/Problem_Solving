class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int> ans;
        int slow = 0, fast = 1;
        
        while(fast < n){
            if(arr[slow] == arr[fast]){
                fast++;
            }else{
                // if new valid number found 
                arr[++slow] = arr[fast];
                fast++;
            }
        }
        // arr[0...slow] always contains the unique elements so far
        for(int i = 0; i<= slow; i++){
            ans.push_back(arr[i]);
        }
        return ans;
        
        // unordered_set<int> st;
        // vector<int> ans;
        
        // for(int i=0; i<n; i++){
        //     st.insert(arr[i]);
        // }
        // int i = 0;
        // for(auto x: st){
        //     ans.insert(ans.begin(), x);
        // }
        // return ans;
        
    }
};