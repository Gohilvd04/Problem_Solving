/**
 * KadanesAlgo
 */


public class KadanesAlgo {
    public static void main(String[] args) {
        int sum = 0; 
        int maxSum = Integer.MIN_VALUE;

        int arr [] = {1, -2,-3, 4, -1, 2, 1};

        for(int i = 0; i<arr.length ; i++){
            sum += arr[i];
            maxSum = Integer.max(maxSum, sum);
            if(sum<0){
                sum=0;
            }
        }
        System.out.println(maxSum);
    }
}