class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> ans(nums.size(), 0);
        int n = nums.size() - 1;
        int l = 0, r = n;
        while (l <= r)
        {
            int leftSq = nums[l] * nums[l];
            int rightSq = nums[r] * nums[r];
            if (leftSq > rightSq)
            {
                ans[n--] = leftSq;
                l++;
            }
            else
            {
                ans[n--] = rightSq;
                r--;
            }
        }
        return ans;
        //    for(int i=0; i<n; i++){
        //         ans.push_back(nums[i] * nums[i]);
        //    }
        //    sort(ans.begin(), ans.end());
        //    return ans;
    }
};