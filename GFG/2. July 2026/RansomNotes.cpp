class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.size(), m = magazine.size();
        int arr[26]={0};

        for(int i = 0; i<m; i++){
            arr[magazine[i] - 'a']++;
        }

        for(int i = 0; i<n; i++){
            if(--arr[ransomNote[i] - 'a'] < 0){
                return false;
            }
        }
        return true;
        // unordered_map<char, int> mp;

        // for(int i = 0; i<m; i++){
        //     mp[magazine[i]]++;
        // }
        // for(int i = 0; i<n; i++){
        //     if(--mp[ransomNote[i]] < 0){
        //         return false;
        //     }
        // }
        // return true;
    }
};