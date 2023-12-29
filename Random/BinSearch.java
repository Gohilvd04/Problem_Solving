public class BinSearch {
    static int searchBin(int[]arr,int key){
        int high,low,mid;
        low=0;
        high=arr.length-1;
        while(low<=high){
            mid=(low+high)/2;
            if (arr[mid]==key){
                return mid;
            }
            else if(arr[mid]<key){
                low=mid+1;
            }
            else {
                high=mid-1;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        int[]arr={1,3,6,8};
        System.out.println(searchBin(arr,8));
    }
}
