 

public class RecursiveLinearSearch {
    static boolean recSearch(int arr[], int l, int r, int key)
    {
        if (r<l)
            return false;
        if (arr[l] == key)
            return true;
        if (arr[r] == key)
            return true;
        return recSearch(arr, l+1, r, key);
    }
    public static void main(String[] args) {
        int l,r,key;

        int []a=new int[1000];
        for (int i=0; i<1000; i++){
            a[i]=i+1;
        }
        l=0;
        r=a.length-1;
        key =1;
//        key=10000001;
        long start = System.nanoTime();
        boolean result =recSearch(a,l,r,key);
        long end = System.nanoTime();
        System.out.println(end-start);
        System.out.println(result);
    }
}
