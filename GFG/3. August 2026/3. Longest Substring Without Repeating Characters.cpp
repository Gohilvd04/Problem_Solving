class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.size();
        int mpp[256];
        fill_n(mpp, 256, -1);
        int left = 0;
        int ans = 0;

        for (int right = 0; right < n; right++)
        {
            if (mpp[s[right]] != -1)
            {
                if (mpp[s[right]] >= left)
                {
                    left = mpp[s[right]] + 1;
                }
            }
            ans = max(ans, right - left + 1);
            mpp[s[right]] = right;
        }
        return ans;
    }
};