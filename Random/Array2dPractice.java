
public class Array2dPractice {
    public static void main(String[] args) {
        int [][]a={{0,1,2},{2,0,3},{2,3,1}};
        int [][]b={{1,0,1},{0,3,2},{1,0,3}};
//       addition(a,b);
        multiplication(a,b);
    }

    static void addition(int [][]a,int [][]b){
        int [][]c={{0,0,0},{0,0,0},{0,0,0}};

        for (int  i=0; i<a.length; i++){
            for (int j=0; j<a[0].length; j++){
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        for (int  i=0; i<a.length; i++){
            for (int j=0; j<a[0].length; j++){
                System.out.print(c[i][j]+" ");
            }
            System.out.println();
        }
    }
    static void multiplication(int [][]a,int [][]b){
        int [][]c={{0,0,0},{0,0,0},{0,0,0}};
        for(int i=0; i<a.length; i++){
            for (int j=0; j<a.length; j++){
                for (int k=0; k<a.length; k++) {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
            }
        }
        for(int i=0; i<a.length; i++){
            for (int j=0; j<a[0].length; j++){
                System.out.print(c[i][j]+" ");
            }
            System.out.println();
        }
    }
}
