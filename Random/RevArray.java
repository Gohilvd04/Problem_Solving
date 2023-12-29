 

public class RevArray {
    public static void main(String[] args) {
        int n;
        int []a={1,4,6,2,3,5};
        n=a.length;
        //reverseSwap(a,n);
        System.out.println();
        reverseTemp(a,n);
    }
    static void reverseSwap(int []a,int n){
        int temp,i;
        for (i=0; i<n/2; i++){
            temp=a[i];
            a[i]=a[n-1-i];
            a[n-1-i]=temp;
        }
        for (i=0;i<n;i++){
            System.out.print(a[i]+" ");
        }
    }
    static void reverseTemp(int []a,int n){

        int []b=new int[n];
        int j=n;
        for (int i=0; i<n; i++){
            b[j-1]=a[i];
            j=j-1;
        }
        for (int k=0; k<n; k++){
            System.out.print(b[k]+" ");
        }
    }
}
