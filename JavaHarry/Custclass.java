class Emp{
	int id;
	String name;

	public void printdetails(){
		System.out.println("My id is : "+ id);
		System.out.println("My id is : "+ name);
	}
}

public class Custclass{
	public static void main(String [] args){
		Emp vd = new Emp();
		vd.id=04;
		vd.name = "Vishal";
		vd.printdetails();
	}
}