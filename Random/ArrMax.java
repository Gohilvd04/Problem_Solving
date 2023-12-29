class MaxOfArray{
static int max(int A[]){
    int m = Integer.MIN_VALUE;

    for(int i=0; i<A.length; i++){
      if(A[i]>m){
	m=A[i];
      }
    }
    return m;
  }
}

class ArrMax{

  public static void main(String [] args){
    // int A[]={3,6,2,9,12};
    
    
    // MaxOfArray a = new MaxOfArray();
    // System.out.println(a.max(A));
  }
}