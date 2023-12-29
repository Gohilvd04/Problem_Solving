import java.util.ArrayList;

public class Subset{
    static void rec(int idx, int[] arr, ArrayList<Integer> temp, ArrayList<ArrayList<Integer>> ans){
        if(idx == arr.length){
            ans.add(temp);
            // System.out.println(ans);
            return;
        }
        temp.add(arr[idx]);
        // System.out.println(temp);
        rec(idx+1, arr, temp, ans);
        temp.remove(temp.size()-1);
        // System.out.println("2 "+temp);
        rec(idx+1, arr, temp, ans);
        // return;
    }
    public static void main(String[] args) {
        int[] arr = {1, 2, 3};
        ArrayList<Integer> temp = new ArrayList<>();
        ArrayList<ArrayList<Integer>> ans = new ArrayList<ArrayList<Integer>>();
        rec(0, arr, temp, ans);

        for(int i=0; i<ans.size(); i++){
            System.out.print(ans.get(i)+ " ");
        }
    }
}