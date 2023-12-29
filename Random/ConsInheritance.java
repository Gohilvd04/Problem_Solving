
class Base{
	public int x;
	Base(){
		System.out.println("I am Base");
	}
	Base(int n){
		System.out.println("I am overloaded Base with value : "+n);
	}
	
	public void setX(int x){
		this.x=x;
	}
	public int getX(){
		return x;
	}
}

class Derived extends Base{
	public int y;
	
	Derived(){
		System.out.println("I am Derived");
	}
	Derived(int x, int y){
		super(x);
		System.out.println("I am overloaded Derived with value : "+y);
	}
	public void setY(int y){
		this.y=y;
	}
	public int getY(){
		return y;
	}

}


public class ConsInheritance{
	public static void main(String [] args){
		// Derived d = new Derived(4,5);
	}
}