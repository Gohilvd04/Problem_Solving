class Solution
{
public:
    vector<int> subarraySum(vector<int> &arr, int target)
    {
        // code here
        int n = arr.size();
        int left = 0, right = 0;
        int tempSum = 0;

        while (right < n)
        {
            tempSum += arr[right];

            while (tempSum > target && left <= right)
            {
                tempSum -= arr[left];
                left++;
            }
            if (tempSum == target)
            {
                return {left + 1, right + 1};
            }
            right++;
        }
        return {-1};
    }
};