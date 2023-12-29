public class Swastik {
    public static void main(String[] args) {
        for(int i=1; i<10; i++){
            for(int j = 1; j<10; j++){
                    if((j==5 || i==5)){
                        System.out.print("*");
                    }
                    else if((j>5 && i==1)){
                        System.out.print("*");
                    }
                    else if((j==1 && i<5)){
                        System.out.print("*");
                    }
                    else if(j==9 && i>5){
                        System.out.print("*");
                    }
                    else if(i==9 && j<5){
                        System.out.print("*");
                    }
                    else{
                        System.out.print(" ");
                    }
    
                    
                }
                System.out.println();
        }
    }
}
