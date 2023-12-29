 
import java.util.Scanner;

class Root{
	public static void main(String [] args){
		double r1,r2;
		int a,c,b,d;

		Scanner sc = new Scanner(System.in);
		a= sc.nextInt();
		b= sc.nextInt();
		c= sc.nextInt();
		sc.close();
		d=b*b-4*a*c;

		if(d==0){
			r1=r2=-b/(2*a);
			System.out.println("r1: " + r1 + " r2: " + r2);
		}
		else if(d>0){
			r1=(-b-(Math.sqrt(d)))/(2*a);
			r2=(-b+(Math.sqrt(d)))/(2*a);
			System.out.println("r1: " + r1 + " r2: " + r2);
		}
		else{
			System.out.println("Invalid roots!!");
		}

		
		
	}

}	