 
import java.util.Scanner;

public class RevArrayJava {
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n=sc.nextInt();
        int []a=new int[n];
        sc.close();
        for (int i=0; i<n; i++){
            a[i]=sc.nextInt();
        }
        System.out.println("Reverse Array ");

        for (int i=n-1; i>=0; i--){
            System.out.print(a[i]+" ");
        }
    }
}
