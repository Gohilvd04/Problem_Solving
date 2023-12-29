 
public class SortSelection {
    public static void main(String[] args) {
        int j,k;
        int []arr={7,4,6,2,8,1,9,3,5};
        for (int i=0; i< arr.length-1; i++) {
            for (j = k = i; j < arr.length; j++) {
                if (arr[j] < arr[k]) {
                    k = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
        }
        for (int x:arr) {
            System.out.print(x+" ");
        }
    }
}
