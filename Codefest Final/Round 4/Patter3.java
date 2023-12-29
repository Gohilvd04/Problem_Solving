import java.util.*;

public class Patter3 {
    public static void fillArray(int[] arr){
        int i=0;
        for(int j=0; j<arr.length; j++){
            arr[j]=fib(i);
            i++;
        }
    }

    static int fib(int n){
        if(n==0){
            return 1;
        }
        if(n==1){
            return 2;
        }
        return fib(n-1) + fib(n-2);
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int a = n * (n + 1) / 2;
        int[] arr = new int[a];

        fillArray(arr);
        int temp = 0;

        for(int x=0; x<n; x++){
            for(int y=x; y<n-1; y++){
                System.out.print(" ");
            }
            for(int y=0; y<x+1; y++){
                System.out.print(arr[temp++] + " ");
            }
            System.out.println();
        }
    }
}
