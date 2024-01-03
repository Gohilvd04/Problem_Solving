import java.util.Scanner;

public class Arm {
    public static void main(String[] args){
        int n, temp, r, sum = 0;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        temp = n;
        sc.close();
        
        while (temp > 0) {
            r = temp % 10;
            sum += r * r * r;
            temp /= 10;
        }

        if (sum == n) {
            System.out.println("This is armstrong");
        } else {
            System.out.println("not armstrong");
        }
    }
}
