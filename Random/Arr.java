public class Arr{
	public static void main(String [] args){
		int [] marks=new int [5];
		for(int i=0; i<5; i++){
			marks[i]=i*3;
		}
		for(int i=0; i<marks.length; i++){
			System.out.println(marks[i]);
		}

		System.out.println("Length of array is: "+marks.length);

		for(int ele:marks){
			System.out.println(ele);
		}
	}

}