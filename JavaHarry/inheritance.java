
class Animal{
	int A1;

	public void setA1(int A1){
		this.A1 = A1;
	}
	public int getA1(){
		return A1;
	}
}

class Dog extends Animal{
	int A3;

	public void setA3(int A3){
		this.A3 = A3;
	}
	public int getA3(){
		return A3;
	}
}

public class inheritance{
	public static void main(String[] args){
		Dog d = new Dog();
		d.setA1(4);
		System.out.println(d.getA1());
		
	}
}

