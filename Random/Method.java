public class Method{
	int sum(int x, int y){
		int z=x+y;
		return z;
	}
	public static void main(String [] args){
		Method obj=new Method();
		int a=5;
		int b=4;
		System.out.println(obj.sum(a,b));
	}
}