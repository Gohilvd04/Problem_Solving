
public class Factorial {
    static long fact1(int n){
        if(n==0 || n==1){
            return 1;
        }
        return n*fact1(n-1);
    }

    public static void main(String[] args) {
        int n=14;
        long start1 = System.nanoTime();
        long fByR=fact1(n);
        long end1 = System.nanoTime();
        long start2 = System.nanoTime();
        long fact=1;
        for (int i=1; i<=n; i++){
            fact*=i;
        }
        long end2 = System.nanoTime();
        System.out.println(end1-start1);
        System.out.println(end2-start2);
        System.out.println(fByR+" by recursion");
        System.out.println(fact+" by iteration");

    }

}
