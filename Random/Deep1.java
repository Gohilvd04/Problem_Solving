public class Deep1 {
    public static void main(String[] args) {
        int []a = {6,11,18,1,2,3};
        
        int pivot = binPivot(a);
        
        System.out.println(pivot);
        int key = 3;

        if( key >= a[pivot] && key <= a[a.length-1] ){
            System.out.println(searchIndex( a, key, pivot, a.length-1 ));
        } else {
            System.out.println(searchIndex( a, key, 0, pivot-1 ));
        }
    }

    
    // static int pivot (int []a){
    //     int i,j,p;
    //     p=a[0];

    //     i=-1;
    //     j=a.length-1;

    //     do{
    //         i++;
    //     }while(a[i]>p);
    //     do{
    //         j--;
    //     }while(a[j]<p);

    //     return i;

    // }

    static int binPivot( int []arr ){

        int i = 0, j = arr.length-1;

        while (i < j) {
            int mid = (i + j) / 2;
            
            if (arr[mid] > arr[j]) {
                i = mid + 1;
            } else {
                j = mid;
            }
        }
        return i;
    }

    static int searchIndex(int []a, int key,int i, int j){
        if( i <= j ){
            int mid = ( i + j ) / 2;

            if( a[mid] == key ){
                return mid ;
            } else if( key > a[mid] ){
                return searchIndex( a, key, mid + 1, j );
            }
            else{
                return searchIndex( a, key, i, mid-1 );
            }
        }
        return -1;
    }
}
