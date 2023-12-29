
public class Fibonacci {

    public static int fib(int n){
        if (n==0 || n==1) {
            return 1;
        }
        else {
            return fib(n - 1) + fib(n - 2);
        }
    }
    public static void main(String[] args) {

        int[] arr = new int[10];
        for (int i=0; i<10; i++) {
            arr[i] = fib(i);
            System.out.print(arr[i] + " ");
        }
        int sum=0;
        for (int i=0; i<10; i++){
            sum += arr[i];
        }
        System.out.println("\n" + sum);
    }
}