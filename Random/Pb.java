import java.util.Scanner;

public class Pb {
    public static void main(String[] args) {
        int t,a,b,c,d;
        Scanner sc = new Scanner(System.in);
        t=sc.nextInt();sc.close();
        while(t>0){

            a=sc.nextInt();
            b=sc.nextInt();
            c=sc.nextInt();
            d=sc.nextInt();
            t--;
            if ((a+c)==180 || (b+d)==180){
                System.out.println("YES");
            }
            else {
                System.out.println("NO");
            }
        }


    }
}
