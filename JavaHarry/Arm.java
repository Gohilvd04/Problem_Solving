import java.util.*;;

public class Arm {
    public static void main(String[] args) {
        int n, temp,r,sum=0;
        Scanner sc = new Scanner(System.in);
        n=sc.nextInt();
        temp=n;

        while(n>0){
            r=n%10;
            sum+=r*r*r;
            n/=10;
        }
        if(sum==temp){
            System.out.println("This is armstrong");
        }
        else{
            System.out.println("not armstrong");
        }
    }
}
