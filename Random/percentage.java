import java.util.Scanner;

public class percentage{
	public static void main(String args[]){
		Scanner vd = new Scanner(System.in);

		System.out.println("Enter M1: ");
		float M1=vd.nextFloat();

		System.out.println("Enter M2: ");
		float M2=vd.nextFloat();

		System.out.println("Enter M3: ");
		float M3=vd.nextFloat();

		System.out.println("Enter M4: ");
		float M4=vd.nextFloat();

		System.out.println("Enter M5: ");
		float M5=vd.nextFloat();
		vd.close();
		float average = ((M1+M2+M3+M4+M5)/500)*100;
		System.out.println(average);
		
	}

}