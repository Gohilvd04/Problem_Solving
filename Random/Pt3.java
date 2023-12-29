import java.util.Scanner;

class Pt3{
	public static void main(String [] args){
		double mtr,ft;
		Scanner sc = new Scanner(System.in);
		mtr = sc.nextDouble();
		ft = mtr*3.28084;
		sc.close();
		System.out.println(ft);
	}
}