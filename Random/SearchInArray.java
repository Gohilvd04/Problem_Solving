 
public class SearchInArray {
    public static void main(String[] args) {
        int Search=1;
//        int Search = 1000000;
        int []a=new int[2000];
        for (int i=0; i<a.length; i++){
            a[i]=i+1;
        }
        long start1 = System.nanoTime();

        Boolean flag=false;

        for (int i=0; i<a.length; i++){
            if (a[i]==Search){
                flag=true;
                break;
            }
        }
        long end1 = System.nanoTime();
        System.out.println(end1-start1);
        System.out.println(flag);

        }


}
