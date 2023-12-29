public class Pattern {
    public static void main(String[] args) {
        pattern3(5);
    }

    static void pattern1(int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n-i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }

    static void pattern2(int n){
        for(int i=0; i<=n; i++){
            for(int j=0; j<i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }

    static void pattern3(int n){
        for(int i =5; i>0; i--){
            for(int j=1; j<=5; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
