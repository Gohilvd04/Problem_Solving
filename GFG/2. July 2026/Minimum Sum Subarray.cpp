class Solution {
  public:
    int smallestSumSubarray(vector<int>& arr) {
        // Code here
        int n = arr.size();
        int curr_min = arr[0], mini = arr[0];
        
        for(int i = 1; i < n; i++){
            curr_min = min(arr[i], curr_min + arr[i]);
            mini = min(mini, curr_min);
        }
        return mini;
    }
};
