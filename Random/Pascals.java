public class Pascals {
    public static void main(String[] args) {
        // for(int i = 1; i<=11; i++){
        //         for(int j=0; j<=11-i; j++){
        //             System.out.print(" ");
        //         }
                
        //         int n = 1;
        //         for(int k = 1; k<=i; k++){
        //             System.out.print("   "+n);
        //             n=n*(i-k)/k;
        //         }
        //         System.out.println();
        //     }
        char c = 'A';
        for(int i = 0; i<4; i++){
            for(int j=0; j<4-i-1; j++){
                System.out.print(" ");
            }
            int temp = 0;
            for(int j = 0; j<2*i+1; j++){
                if(temp % 2 == 0){
                    System.out.print("*");
                } else {
                    System.out.print((c++) + "");
                }
                temp++;
            }
            System.out.println();
        }
    }
}
