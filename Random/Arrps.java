public class Arrps{
	public static void main(String[] args){
	/*	int[] num= {3,4,5,2,1};

		int n=8;
		boolean isPre=false;
		for(int ele:num){
			if(n==ele){
				isPre=true;
				break; 
			}
		}
		if(isPre)
			System.out.println("Present in array!");
		else
			System.out.println("Not Present in array!");
----------------------------------------------------------------------------------	

		int[][] m1={{1,2,3},
			    {1,1,1}};
		int[][] m2={{0,1,3},
			    {3,5,1}};
		int[][] r={{0,0,0},
			   {0,0,0}};

		for(int i=0; i<m1.length; i++){
			for(int j=0; j<m1[i].length; j++){
				r[i][j]=m1[i][j]+m2[i][j];
			}
		}
		for(int i=0; i<m1.length; i++){
			for(int j=0; j<m1[i].length; j++){
				System.out.print(r[i][j]+" ");
			}
			System.out.print("\n");
		}
		
---------------------------------------------------------------------------------

		int[] arr={1,2,3,4,5};
		int l=arr.length;
		int n=Math.floorDiv(l,2);
		int temp;
		
		for(int i=0; i<n; i++){
			temp=arr[i];
			arr[i]=arr[l-1-i];
			arr[l-1-i]=temp;
		}
		for(int ele:arr){
			System.out.print(ele+",");
		}

		
------------------------------------------------------------------------------------
		*/
		int[] arr={1,2,36,4,5};
		boolean isSorted = true;
		
		for(int i=0; i<arr.length-1; i++){
			if(arr[i]>arr[i+1]){
				isSorted=false;
				break;
			}
		}
		if(isSorted){
			System.out.println("Array is Soted");
		}
		else{
			System.out.println("Array is not Soted");
		}
		





	}
}