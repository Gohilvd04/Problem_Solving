import java.io.*;
import java.util.*;

public class Main {

    /*
     * Complete the 'FindDartAndRoundWinner' function below.
     *
     */

    public static int[] FindDartAndRoundWinner(int[][] round) {
        int total = 501; 
        int i; 
        int k;
        int j;
        int dart = 0;
        
        for(i=0; i<round.length; i++){
            int count = 0;
            int  temp = total;
            for(j=0; j<3; j++){
                count+=round[i][j];
            }
            
            if(total>=count){
                total = total -count;
            }
            
            if(total == 0){
                for(k=0; k<3; k++){
                    temp-=round[i][k];
                    if(temp ==0){
                        dart = k;
                        break;
                    }
                }
                break;
            }
        }
        if(total != 0){
            return new int[]{-1,-1};
        }
        return new int[]{i+1, dart+1};
    }

    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

        BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

        int rounds = Integer.parseInt(reader.readLine().trim());

        int[][] intArray = new int[rounds][];

        for (int i = 0; i < rounds; i += 1) {
            String[] arTemp = reader.readLine().trim().split(" ");
            int[] intArr = strArrayToIntArray(arTemp);
            intArray[i] = intArr;
        }

        int[] result = FindDartAndRoundWinner(intArray);

        writer.write(result[0] + " " + result[1]);

        writer.flush();
        writer.close();
    }

    public static int[] strArrayToIntArray(String[] arr) {
        int[] intArr = new int[arr.length];
        for (int i = 0; i < arr.length; i++) {
            intArr[i] = Integer.parseInt(arr[i].trim());
        }
        return intArr;
    }
}