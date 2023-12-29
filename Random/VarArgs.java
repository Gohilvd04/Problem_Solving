public class VarArgs{
	static int sum(int ...arr){
		int r=0;
		for(int i:arr){
			r+=i;
		}
		return r/arr.length; // Average of arguments/Parametre
	}

	public static void main(String[] args){
		System.out.println(sum(4,5,6));
		System.out.println(sum(4,5,6,1));
		System.out.println(sum(4,5,6,2));
		System.out.println(sum(4,5,6,3,1));
	}

}