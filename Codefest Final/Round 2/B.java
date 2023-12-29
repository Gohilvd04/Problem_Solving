public class B {
    public static void main(String[] args) {
        
        // int[][] mat ={{9 ,8, 7, 6, 5},{9, 9, 8, 7, 6},{9 ,9, 9, 8, 7},{9,9,9,8,8}};
        // int[][] mat ={{1 ,2, 3, 4, 8},{5, 1, 2, 3, 4},{4 ,5, 1, 2, 3},{7,4,5,1,2}};
    int[][] mat ={{5,6,7,8,9},
            {7,5,6,7,8},
            {4,7,5,6,7},
            {4,4,7,5,6}};

        if(forRow(mat)){
            System.out.println("True");
        } else {
            System.out.println("False");
        }
        }
        static boolean forRow(int [][]mat){
            for(int i=0; i<4; i++){
                for(int j=0; j<5; j++){
                    int temp = mat[i][j];
                    for(int x=i+1,y=j+1; x<4 && y<5; x++,y++){
                        // cout << temp << " " << mat[i][j]<< endl;
                        if(temp!=mat[x][y]) return false;
                    }
                }
            }
            return true;
        }
}
