class Solution
{
public:
    int maxSubarraySum(vector<int> &arr, int k)
    {
        // code here
        int left = 0, right = k - 1;
        int n = arr.size();
        int sum = 0;

        for (int i = 0; i < k; i++)
        {
            sum += arr[i];
        }
        int maxSum = sum;

        while (right < n)
        {
            maxSum = max(maxSum, sum);
            sum = sum - arr[left] + arr[right + 1];
            left++;
            right++;
        }
        // for(int i = k; i<n; i++){
        //     sum+= arr[i] - arr[i-k];
        //     maxSum = max(sum, maxSum);
        // }
        return maxSum;
    }
};