/**
 * fibonacci1
 */
public class fibonacci1 {

    public static void main(String[] args) {
        int n = 2;
        fib(n);
    }
    public static void fib(int n) {
        int first = 1;
        int next = 1;

        if (n == 0) {
            System.out.print("Fibonacci");
        }
        else if(n==1){
            System.out.print(first);
        }        
        else {
            System.out.print(first +", "+next);
            for (int i = 2; i < n; i++) {
                int third = first + next;
                first = next;
                next = third;

                System.out.print(", " + third);
            }
        }
    }
}