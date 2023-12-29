class Emp{
	int salary;
	String name;
	
	public String getName(){
		return name;
	}
	public int getSalary(){
		return salary;
	}
	public void setName(String n){
		name = n;
	}
}

public class Oopps8{
	public static void main(String [] args){
		Emp vd = new Emp();

		vd.salary=10000000;
		vd.setName("Vishal");
		System.out.println(vd.getSalary());
		System.out.println(vd.getName());
		
		
	}

}