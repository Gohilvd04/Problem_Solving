
public class ReverseArray {
    public static void main(String[] args) {
        int []a={1,2,3,4,5};
        reverse(a);
    }
    static void reverse(int []a){
        for (int i=0; i<a.length/2; i++){
           int temp;
           temp=a[i];
           a[i]=a[a.length-1-i];
           a[a.length-1-i]=temp;
        }
        for (int x:a) {
            System.out.print(x+" ");

        }
    }
}
