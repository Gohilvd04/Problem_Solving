// import java.util.Arrays;
import java.util.*;

class Day2{
    public static void main(String[] args) {
        // Problem :- 1
        // int []arr = {1,2,3};
        // int [] a = {1,0};
        // long sum = 0;
        // for(int i:arr){
        //     // sum+=i;
        //     System.out.println(i+" ");
        // }
        // System.out.println(sum);
        // System.out.println(arr.length);
        // long op1=0;
        // long op2=0;
        // for(int i = 0; i<arr.length; i++){
        //     op1=op1*10+arr[i];
        // }
        // for(int i = 0; i<a.length; i++){
        //     op2 = op2*10+a[i];
        // }
        // long sum = op1+op2;
        // ArrayList<Long> ans = new ArrayList<>();
        // while(sum>0){
        //     ans.add(0,sum%10);
        //     sum/=10; 
        // }

        // for(long j:ans){
        //     System.out.print(j);
        // }

        //Problem :- 1 
        // int []arr = {1,2,3};
        // int a [] = {1,0,0,0};

        // int []a = {1,1,2,3};
        // ArrayList<Long> ans = new ArrayList<>();
        // ans = addTwoArrays(arr,a);

        // for(long l:ans){
        //     System.out.print(l);
        // }


        // Problem :- 2

        // int []arr = {4,5,1,2,3};

        // ArrayList<ArrayList<Integer>> ans = new ArrayList<ArrayList<Integer>>();
        // ans= subsetOfArray(arr);
        // for(ArrayList<Integer> i:ans){
        //     System.out.println(i);
        // }
        
        // subsetOfArrayRec(arr, 0, ans, new ArrayList<>());

        // for(ArrayList a : ans){
        //     System.out.println(a);
        // }


        // Problem 3
        int []arr = {4,5,1,2,3};

    }

    public static ArrayList<Long> addTwoArrays(int[] arr, int []a) {

        ArrayList<Long> ans = new ArrayList<Long>();
        String s = "";
        String s1 = "";

        for(int i=0; i<arr.length; i++){
            s+=arr[i];
        }
        for(int j= 0; j<a.length; j++){
            s1+=a[j];
        }

        Long sum=Long.parseLong(s);
        Long sum1=Long.parseLong(s1);
        sum+=sum1;

        while(sum>0){
            ans.add(0, sum%10);
            sum/=10;
        }

        return ans;

    }

    static ArrayList<ArrayList<Integer>> subsetOfArray(int []arr){
        ArrayList<ArrayList<Integer>> ans = new ArrayList<ArrayList<Integer>>();
        ans.add(new ArrayList<>());
        for(int i=0; i<arr.length; i++){
            int size = ans.size();
            for(int j=0; j<size; j++){
                ArrayList<Integer> temp = new ArrayList<>(ans.get(j));
                temp.add(arr[i]);
                ans.add(temp);
            }
        }
        return ans;
    }

    static void subsetOfArrayRec(int []arr,int index,ArrayList<ArrayList<Integer>>ans,ArrayList<Integer>temp){
        if(index == arr.length){
            ans.add(temp);
            return;
        }
        temp.add(arr[index]);
        subsetOfArrayRec(arr,index+1,ans,temp);
        temp.remove(temp.size()-1);
        subsetOfArrayRec(arr,index+1,ans,temp);

        return;
    }

    static boolean isSortedRotated(int []arr){
        int count=0;
        for(int i = 1,j=1; i<arr.length; i++){
            if(arr[i-1]>arr[j]){
                count = 1;
            }
        }
        return false;
    }
}