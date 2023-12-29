
class Emp{
	private int id;
	private String name;
	
	public Emp(){
		id=04;
		name="Vishal";
	}

	public void setName(String n){
		name=n;
	}
	public void setId(int n){
		id=n;
	}
	public String getName(){
		return name;
	}
	public int getId(){
		return id;
	}

}


public class Constructor{
	public static void main(String [] args){
		Emp vd = new Emp();

		System.out.println(vd.getId());
		System.out.println(vd.getName());
	}
}