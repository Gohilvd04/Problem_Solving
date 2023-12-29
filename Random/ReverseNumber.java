
public class ReverseNumber {
    public static void main(String[] args) {
        System.out.println(reverse1(123456789));
    }
    static int reverse1(int n){
        int rev=0;
        int rem;
        while(n>0){
            rem=n%10;
            n=n/10;

            rev=10*rev+rem;
        }
        return rev;
    }
}
