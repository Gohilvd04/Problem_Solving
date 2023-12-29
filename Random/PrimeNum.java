 
public class PrimeNum {
    public static void main(String[] args) {

       if (isPrime(7)){
           System.out.println("It is prime number");
       }
       else {
           System.out.println("it not prime number");
       }
    }
    static boolean isPrime(int n){
        for (int i=2; i<n; i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
}
