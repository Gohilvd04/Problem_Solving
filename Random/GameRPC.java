import java.util.Random;
import java.util.Scanner;


public class GameRPC{
	public static void main(String [] args){
		Scanner vd = new Scanner(System.in);
		System.out.println("Enter 0 for Rock; 1 for Paper; 2 for Scissor;");

		int userInput = vd.nextInt();
		vd.close();
		// System.out.println("Your choice: "+userInput);

		Random rd = new Random();
		int computerInput = rd.nextInt(3);
		if(userInput != 0 && userInput != 1 && userInput != 2){
			System.out.println("Enter valid choice!!");
		}
		else{
			if(userInput ==0){
				System.out.println("Your choice: Rock");
			}
			if(userInput ==1){
				System.out.println("Your choice: Paper");
			}
			if(userInput ==2){
				System.out.println("Your choice: Scissor");
			}
			
			if(computerInput ==0){
				System.out.println("Computer's choice: Rock");
			}
			if(computerInput ==1){
				System.out.println("Computer's choice: Paper");
			}
			if(computerInput ==2){
				System.out.println("Computer's choice: Scissor");
			}

			// System.out.println("Computer's choice: "+computerInput);

			if(userInput== computerInput){
				System.out.println("Draw");
			}
			if(userInput==0 && computerInput==2 || userInput==1 && computerInput==0 ||userInput==2 && computerInput==1){
				System.out.println("You Win!!");
			}
			else{
				System.out.println("Computer Win!!");
			}
		}
	}
}