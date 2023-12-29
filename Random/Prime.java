import java.util.Scanner;

class Prime{

  public static boolean isPrime(int n){
    for(int i=2; i<n/2; i++){
	if(n%i==0){
	  return false;
	}
    }
    return true;
  }
  public static void main(String [] args){
    int n;
    Scanner sc = new Scanner(System.in);
    n=sc.nextInt();
    sc.close();
    System.out.println(isPrime(n));

  }
}