
class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        int n = s1.size(), m = s2.size();
        if(n != m) return false;
        if(s1 == s2) return true;
        
        map<char, int> mp1, mp2;
        for(int i=0; i<n; i++){
            mp1[s1[i]]++;
            mp2[s2[i]]++;
        }
        for(const auto& [key, value]: mp1){
            if(mp2[key] != value){
                return false;
            }
        }
        return true;
    }
};

// class Solution {
//   public:
//     bool areAnagrams(string& s1, string& s2) {
//         // code here
//         sort(s1.begin(), s1.end());
//         sort(s2.begin(), s2.end());
        
//         // if(s1.contains(s1)) return true;
//         return s1.find(s2) != string::npos;
//     }
// }