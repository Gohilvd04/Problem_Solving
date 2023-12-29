public class Pt7{
	public static void main(String[] args){
		
		int c1 = 'A'+(int)(Math.random()*('Z'-'A'));
		int c2 = 'A'+(int)(Math.random()*('Z'-'A'));
		int c3 = 'A'+(int)(Math.random()*('Z'-'A')); 
		
		int d1 = (int)(Math.random()*10);
		int d2 = (int)(Math.random()*10);
		int d3 = (int)(Math.random()*10);
  		int d4 = (int)(Math.random()*10);

  		System.out.println(" "+(char)(c1)+((char)(c2))+" "+((char)(c3))+" "+d1+d2+d3+d4);
	}
}