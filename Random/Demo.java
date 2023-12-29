public class Demo{
    public static void main(String[] args){
       
        for(int i=1;i<=4;i++){
            int bp=i/2;
            for(int j=1; j<=bp; j++){
                System.out.print(j);
            }
            for(int j=i; i>=1; j--){
                System.out.print(j);
            }
            System.out.println();
        }
    }
}