
public class Exp11 {
    public static void main(String[] args) {
        int[][] arr = new int[6][6];
        matrix_filler(arr);
        display(arr);
        row_checker(arr);
        col_checker(arr);
    }

    public static void matrix_filler(int[][] arr) {
        for(int i=0; i<6; i++){
            for(int j=0; j<6; j++){
                arr[i][j] = (int) ((Math.random()*5) % 2);
            }
        }
    }

    public static void display(int[][] arr){
        for(int i=0; i<6; i++){
            for(int j=0; j<6; j++){
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void row_checker(int[][] arr) {
        for(int i=0; i<6; i++){
            int temp = arr[i][0] + arr[i][1] + arr[i][2] + arr[i][3] + arr[i][4] + arr[i][5];
            if(temp%2==1)
                System.out.println("Row " +(i+1)+ " has Odd 1's");
        }
    }

    public static void col_checker(int[][] arr) {
        for(int i=0; i<6; i++){
            int temp = arr[0][i] + arr[1][i] + arr[2][i] + arr[3][i] + arr[4][i] + arr[5][i];
            if(temp%2==1)
                System.out.println("Column " +(i+1)+ " has Odd 1's");
        }
    }
}
