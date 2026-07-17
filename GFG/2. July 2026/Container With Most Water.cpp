class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        int capacity = 0, l = 0, r = n-1;
        while(l < r){
            capacity = max(min(arr[l], arr[r]) * (r - l), capacity);
            if(arr[l] > arr[r]){
                r--;
            }else{
                l++;
            }
        }
        return capacity;
    }
};