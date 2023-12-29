public class fib{

	static int fibonacci(int n){
		if(n==0 || n==1){
			return 1;
		}
		else{
			return fibonacci(n-1)+fibonacci(n-2);
		}

		
	} 
	public static void main(String [] args){
		
		fibonacci(9);
		for(int i=0; i<9; i++){
			System.out.println(fibonacci(i));
		}
	}
}