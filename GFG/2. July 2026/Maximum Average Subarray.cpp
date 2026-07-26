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

// LeetCode: 643. Maximum Average Subarray I

// Return the average of the subarray with the maximum average value. 
// The function should return a double representing the maximum average of any contiguous subarray of length k.
// class Solution {
// public:
//     double findMaxAverage(vector<int>& arr, int k) {
//         int sum = 0;
//         int n = arr.size();

//         for(int i = 0; i<k; i++){
//             sum += arr[i];
//         }

//         int maxSum = sum;
//         for(int i =k; i<n; i++){
//             sum += arr[i] - arr[i-k];
//             maxSum = max(maxSum, sum);
//         }
//         return (double) maxSum/k;
//     }
// };