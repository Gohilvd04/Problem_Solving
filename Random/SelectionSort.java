 
public class SelectionSort {
    public static void main(String[] args) {
        int []a={3,2,6,1,7,5,4};
        int i,j,k;
        for (i=0;i<a.length-1; i++){
            for (j=k=i; j<a.length; j++){
                if (a[j] < a[k]){
                    k=j;
                }
            }
            int temp=a[i];
            a[i]=a[k];
            a[k]=temp;
        }
        for (int x:a) {
            System.out.print(x+" ");

        }

    }
}
