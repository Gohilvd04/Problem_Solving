import java.util.Scanner;

class Pt5{
	public static void main(String [] args){
		int a,b,c;
		Scanner sc = new Scanner(System.in);
 
		System.out.print("Enter a : ");
		a = sc.nextInt();

		System.out.print("Enter b : ");
		b = sc.nextInt();

		System.out.print("Enter c : ");
		c = sc.nextInt();
		sc.close();
		if(a>b && a>c){
		  if(b>c){System.out.println(a + "," + b + "," +c);}
		  else{System.out.println(a + "," + c + "," +b);}
		}

		if(b>a && b>c){
		  if(a>c){System.out.println(b + "," + a + "," +c);}
		  else{System.out.println(b + "," + c + "," +a);}
		}

		if(c>b && c>a){
		  if(b>a){System.out.println(c + "," + b + "," +a);}
		  else{System.out.println(c + "," + a + "," +b);}
		}
	}

}