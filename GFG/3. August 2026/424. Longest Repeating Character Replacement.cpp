class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int left = 0, right = 0, ans = 0;
        int  maxFreq = 0;
        int freq[26] = {};

        // for(int i = 0; i<n; i++){
        //     int freq[26] = {};
        //     int  maxFreq = 0, changes = 0;

        //     for(int j =i; j<n; j++){
        //         freq[s[j] - 'A']++;
        //         maxFreq = max(maxFreq, freq[s[j] - 'A']);

        //         changes = (j-i+1) - maxFreq;
        //         if(changes <= k){
        //             ans = max(ans, j-i+1);
        //         }else{
        //             break;
        //         }
        //     } 

        // }
        
        while(right < n){
            freq[s[right] - 'A']++;
            maxFreq = max(maxFreq, freq[s[right] - 'A']);

            while((right - left + 1) - maxFreq > k){
                freq[s[left] -'A']--;
                maxFreq = 0;
                for(int i = 0; i<26; i++){
                    maxFreq = max(maxFreq, freq[i]);
                }
                left++;
            }
            if((right - left + 1) - maxFreq <= k){
                ans = max(ans, (right - left + 1));
            }
            right++;
        }
        return ans;


    }
};