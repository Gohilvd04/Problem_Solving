import java.util.Scanner;

class Pt8{
	public static void main(String [] args){
		int n,d=2;
		Scanner sc = new Scanner(System.in);
		n= sc.nextInt();
sc.close();
		while(n>1){
			if(n%d==0){
				
				System.out.print(d+" ");
				n=n/d;
			}
			else{
				d++;
			}
		
		}
		
	}
}