 
import java.util.Scanner;

class AreaOfTriangle{
	public static void main(String [] args){
		float h,b,a;
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter base of triangle: ");
		b= sc.nextFloat();

		System.out.println("Enter height of triangle: ");
		h= sc.nextFloat();
		sc.close();
		a=(h*b)/2;
		System.out.println("Area of triangle is : "+a);
		
		Area T = new Area();

		System.out.println("Area of a Triangle by class area is :" +T.Aot(2,3,4));
		
	}
}

class Area{
	public double Aot(float a,float b,float c){
		double S,area;
		Scanner sc = new Scanner(System.in);
		sc.close();
		/* a = sc.nextFloat();
		b = sc.nextFloat();
		c = sc.nextFloat();
		*/
		S=(a+b+c)/2d;

		area=Math.sqrt(S*(S-a)*(S-b)*(S-c));

		return area;
	} 
}