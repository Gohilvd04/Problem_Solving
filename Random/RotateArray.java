
public class RotateArray {
    public static void main(String[] args) {
        int []a={1,2,3,4,5,6};
        int []b=new int[10];
        b[0]=1;b[1]=7;b[2]=4;b[3]=3;b[4]=6;
        rotateLeft(a);
        rotateRight(a);
        insert(b,2,20);
    }
    static void rotateLeft(int []a){
        int temp=a[0];
        for ( int i=0; i<a.length-1; i++){
           a[i]=a[i+1];
        }
        a[a.length-1]=temp;
        for (int i=0; i<a.length; i++){
            System.out.println(a[i]);
        }
    }
    static void rotateRight(int []a){
       int temp=a[a.length-1];

        for (int i=a.length-1; i>0; i--){
            a[i]=a[i-1];
        }
        a[0]=temp;

        for (int i=0; i<a.length; i++){
            System.out.print(a[i]+" ");
        }

    }
    static void insert(int []a,int index,int x){
        int n=5;
        for (int i =n; i>index; i-- ){
            a[i]=a[i-1];
        }
        a[index]=x;
        for (int i=0; i<a.length; i++){
            System.out.println(a[i]);
        }
    }
    static int delete(int []a,int index){
        int x=-1;

        for (int i=0; i<=index; i++){
            x=a[i];
        }
        return x;


    }
}
