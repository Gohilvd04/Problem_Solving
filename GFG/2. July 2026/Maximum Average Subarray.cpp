class Solution {
  public:
    int findMaxAverage(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        long long sum = 0;
        
        for(int i =0; i<k; i++){
            sum += arr[i];
        }
        
        long long maxSum = sum;
        int left = 0;
        for(int i = k; i<n; i++){
            sum += arr[i] - arr[i-k];
            
            if(sum > maxSum){
                maxSum = sum;
                left = i - k + 1;
            }
        }
        return left;
        
    }
};