

public class ReverseNum {
    public static void main(String[] args) {
        System.out.println("The number is 654 ");
        System.out.println("The reverse number is :"+reverseTheNum(654));
        int []a={1,2,3,4,5};
        reverseArray(a);
    }
    static int reverseTheNum(int n){
        int rev=0,last;
        while(n>0){
            last=n%10;
            rev=rev*10+last;
            n=n/10;
        }
        return rev;
    }
    static void reverseArray(int []a){
        for (int i=0; i<a.length/2; i++){
            int temp=a[i];
            a[i]=a[a.length-1-i];
            a[a.length-1-i]=temp;
        }
        for (int i=0; i<a.length; i++){
            System.out.print(a[i]+" ");
        }
    }
}
