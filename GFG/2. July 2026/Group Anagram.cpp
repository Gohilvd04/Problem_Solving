class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<string>> mpp;
        vector<vector<string>> ans;
        for(int i = 0; i < n; i++){
            string key = strs[i];
            sort(key.begin(), key.end());
            mpp[key].push_back(strs[i]);
        }
        for(const auto [key, value]: mpp){
            ans.push_back(value);
        }
        return ans;
    }
};