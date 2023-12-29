import java.util.Scanner;

public class BinarySearchArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int []a={1,21,31,41,51,61,71,81,91};
        int high=a.length-1;
        int low=0;
        boolean flag=false;
        int search=sc.nextInt();
        sc.close();
        while(high>=low){
            int mid=(low+high)/2;
            if (search==a[mid]){
                System.out.println("Element found at index:"+ mid);
                flag = true;
                break;
            }
            else if(search>a[mid]){
                low=mid+1;
            }
            else if (search<a[mid]){
                high=mid-1;
            }
        }
        if(!flag){
            System.out.println("not found ");
        }
    }
}
