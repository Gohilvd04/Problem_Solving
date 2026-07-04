class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        unordered_map<int, int> mpp;
        
        for(int i=0; i<n; i++){
            int num = arr[i];
            int required = target - num;
            
            if(mpp.find(required) != mpp.end()){
                return true;
            }
            mpp[num] = i;
        }
        return false;
    }
};

/*
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i] + arr[j] == target){
                    return true;
                }
            }
        }
        return false;
    }
};
*/

/*
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int left = 0, right = n-1;
        while(left < right){
            int sum = arr[left] + arr[right];
            if(sum == target){
                return true;
            }
            else if(sum < target){
                left++;
            }
            else{
                right--;
            }
        }
        return false;
    }
};
*/