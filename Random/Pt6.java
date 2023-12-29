import java.util.Scanner;

class Pt6{
	public static void main(String [] args){
		String ch;
		Scanner sc = new Scanner(System.in);
		sc.close();
		ch = sc.next();

		switch(ch){
		case "A":
		case "a":
		case "E":
		case "e":
		case "I":
		case "i":
		case "O":
		case "o":
		case "U":
		case "u":

		System.out.println("This is Vowel!!!");
		break;
		default:
		System.out.println("This is Constant!!!");
		}
		
	}

}