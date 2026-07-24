
class Solution
{
    /**
    * @param number[] arr

    * @returns number
    */
    largest(arr)
    {
        // code here
        let n = arr.length;
        let max = 0;
        for (let i = 0; i < n; i++)
        {
            if (max < arr[i])
            {
                max = arr[i]
            }
        }
        return max;
    }
}
