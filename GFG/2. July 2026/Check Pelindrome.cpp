class Solution
{
public:
    bool isPalindrome(string &s)
    {
        // code here
        int l = 0, r = s.size() - 1;
        while (l < r)
        {
            if (s[l++] != s[r--])
            {
                return false;
            }
            else
                continue;
        }
        return true;
    }
};