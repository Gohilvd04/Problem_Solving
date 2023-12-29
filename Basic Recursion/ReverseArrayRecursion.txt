class ReverseArrayRecursion{

    static void reverse(int []arr, int l, int r){
        if(l>=r) return;

        swap(arr,l,r);
        reverse(arr,l+1,r-1);
    }

    static void swap(int [] arr, int l, int r){
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
    }
    public static void main(String[] args) {
        int [] arr = {3,5,1,2,4};
        System.out.println("Before reverse: ");
        for(int i:arr){
            System.out.print(i+" ");
        }
        reverse(arr, 0 , arr.length-1);
        System.out.println("\nAfter reverse: ");
        for(int i:arr){
            System.out.print(i+" ");
        }
    }
}