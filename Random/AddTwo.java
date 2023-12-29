 
import java.util.Scanner;
public class AddTwo {
        static int[] twoSum(int[] nums, int target) {
            int []result=new int[2];
            for(int i=0; i<nums.length; i++){
                for(int j=i,k=i+1; j<nums.length; j++){
                    if((nums[j]+nums[k])==target){
                        result[0]=k;
                        result[1]=j;
                        return result;
                    }
                }
            }
            return result;
        }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[]arr={3,5,2,1,6,4};
        int target=sc.nextInt();sc.close();
        int [] array=twoSum(arr,target);
        for (int el:array) {
            System.out.print(el);
        }
    }
}
