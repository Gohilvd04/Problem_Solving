class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        int right = p.size();
        int n = s.size();
        vector<int> ans;
        vector<int> s_count(26), p_count(26);
        if (s.size() < p.size())
            return {};
        for (int i = 0; i < p.size(); i++)
        {
            s_count[s[i] - 'a']++;
            p_count[p[i] - 'a']++;
        }
        if (s_count == p_count)
        {
            ans.push_back(0);
        }
        for (int i = right; i < n; i++)
        {
            s_count[s[i - right] - 'a']--;
            s_count[s[i] - 'a']++;
            if (s_count == p_count)
            {
                ans.push_back(i - right + 1);
            }
        }
        return ans;
    }
};

// class Solution {
// public:
//     vector<int> findAnagrams(string s, string p) {
//         int left = 0, right = p.size();
//         int n = s.size();
//         vector<int> ans;
//         string str = "";
//         for(int i = 0; i<p.size(); i++){
//             str += s[i];
//         }
//         if(isAnagram(str, p)){
//             ans.push_back(left);
//         }
//         for(int i = right; i<n; i++){
//             str.erase(0,1);
//             str += s[i];
//             if(isAnagram(str, p)){
//                 ans.push_back(i - right + 1);
//             }
//         }
//         return ans;

//     }
//     bool isAnagram(string s1, string s2){
//         unordered_map<char, int> mpp;
//         if(s1.size() != s2.size()) return false;

//         for(int i = 0; i<s1.size(); i++){
//             mpp[s1[i]]++;
//         }
//         for(int i = 0; i<s2.size(); i++){
//             mpp[s2[i]]--;
//         }

//         for(auto& it: mpp){
//             if(it.second != 0){
//                 return false;
//             }
//         }
//         return true;
//     }
// };