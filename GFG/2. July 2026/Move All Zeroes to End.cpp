class Solution
{
public:
    void pushZerosToEnd(vector<int> &arr)
    {
        // code here
        int n = arr.size();
        int slow = 0, fast = 0;

        while (fast < n)
        {
            // if(arr[slow] != 0){
            //     slow++;
            //     fast++;
            // }else if(arr[slow] == 0 && arr[fast] != 0){
            //     swap(arr[slow++], arr[fast++]);
            // }else{
            //     fast++;
            // }
            if (arr[fast] != 0)
            {
                arr[slow++] = arr[fast++];
            }
            else
            {
                fast++;
            }
        }
        while (slow < n)
        {
            arr[slow++] = 0;
        }

        // int index = 0;

        // for(int i =0; i<n; i++){
        //     if(arr[i] != 0){
        //         arr[index++] = arr[i];
        //     }
        // }
        // while(index < n){
        //     arr[index++] = 0;
        // }
    }
};