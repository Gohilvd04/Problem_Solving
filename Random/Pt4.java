import java.util.Scanner;

class Pt4{
	public static void main(String [] args){
		float wP,hI,BMI,wK,hM;

		Scanner sc = new Scanner(System.in);
		sc.close();
		System.out.println("Enter weight in pound: ");
		wP = sc.nextFloat();

		System.out.println("Enter height in inch: ");
		hI = sc.nextFloat();

		wK = 0.45359237f*wP;
		System.out.println("Your weight in kg: "+ wK);

		hM = 0.0254f*hI;
		System.out.println("Your height in metre: "+ hM);

		BMI = wK/(hM*hM);

		System.out.println("Your BMI is "+ BMI);
		
	}
}