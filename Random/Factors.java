
import java.util.Scanner;
public class Factors {
    public static void main(String[] args) {
        
        factor();
    }

    static void factor(){
        int div=2;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number ");
        int num = sc.nextInt();
        sc.close();

        while( num > 1 ){
            if( num % div == 0 ){
                System.out.print( div + " " );
                num /= div;
            }
            else{
                div++;
            }
        }
    }
}
