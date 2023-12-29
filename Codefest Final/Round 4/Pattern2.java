import java.util.Scanner;

class Pattern2 {

    public static boolean isPrime(int i){
        int j = 1;
        while(j<i){
            if(i%j==0){
                return false;
            }
            j++;
        }
        return true;
    }

    public static void fillArray(int[] arr){
        int i=1;
        for(int j=0; j<arr.length; j++){
            while(!(i%3==0 && i%5==0)){
                i++;
            }
            arr[j]=i++;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int a = n * (n + 1) / 2;
        int[] arr = new int[a];

        fillArray(arr);

        int temp = 0;
        for(int x = 0; x<n; x++){
            for(int y = 0; y<=n-x-2; y++){
                System.out.print("     ");
            }
            for(int y = 0; y<=x; y++){
                String temp2 = Integer.toString(arr[temp]);
                System.out.format("%5d", arr[temp++]);
            }
            System.out.println();
        }
    }
}