class ReversAI{
  static int revers(int n){
    int rfirst,rev=0;
    while(n>0){
        rfirst=n%10;
        n=n/10;
        rev = rev*10 + rfirst;
    }
    return rev;
    
  }
  static void revers(int A[]){
    for(int i=A.length-1; i>=0; i--){
       System.out.println(A[i]);
    }
  }

  public static void main(String [] args){
    // int A[] = {23,6,8,5,9,36};
    // System.out.println(revers(A));
    // System.out.println(revers(765));
  }
}