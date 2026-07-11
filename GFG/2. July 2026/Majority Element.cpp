class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int n = arr.size();

        // for(int i=0; i<n; i++){
        //     int count = 1;
        //     for(int j = i+1; j<n; j++){
        //         if(arr[i] == arr[j]){
        //             count++;
        //         }
        //     }
        //     if(count > n/2) return arr[i];
        // }
        // return -1;
        
        
        unordered_map<int, int> mpp;
        for(int i=0; i<n; i++){
            mpp[arr[i]]++;
        }
        for(auto [key, value]: mpp){
            if(value > n/2) return key;
        }
        return -1;

        //Moore's Voting Algo
        // int count = 0, value = 0;
        // for(int i = 0; i<n; i++){
        //     if(count == 0){
        //         count = 1;
        //         value = arr[i];
        //     }
        //     else if(arr[i] == value) count++;
        //     else count--;
        // }
        // int cnt = 0;
        // for(int i=0; i<n; i++){
        //     if(value == arr[i]) cnt++;
        // }
        // if(cnt > n/2) return value;
        // return -1;
        
        
    }
};