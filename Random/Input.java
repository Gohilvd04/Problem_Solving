import java.util.Scanner;

public class Input{
	public static void main(String args[]){
		System.out.println("Taking inputs from user");
		Scanner vd=new Scanner(System.in);
		System.out.print("Enter a: ");
		int a = vd.nextInt();
		System.out.print("Enter b: ");
		int b = vd.nextInt();
		int c=a+b;
		System.out.println("Sum of a & b is: "+ c);
		vd.close();
	}
}