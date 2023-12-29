class Pattern{
    public static void main(String[] args) {
        
        // for(int i=0; i<4; i++){
        //     for(int j=0; j<4; j++){
        //         System.out.print((i-j) + "  ");
        //     }
        //     System.out.println();
        // }

        // for(int i = 0; i<=5; i++){
        //     for(int j = 0; j<=5; j++){

            // }
            // System.out.println();


            // py1(5);
            // py2(5);

            // for(int i=0; i<5; i++){
            //     for(int j=0; j<=i; j++){
            //         if((i+j)%2 == 0){
            //             System.out.print("1 ");
            //         }
            //         else{
            //             System.out.print("0 ");
            //         }
            //     }
            //     System.out.println();
            // }
            // for(int i = 1; i<=5; i++){
            //     for(int j = 1; j<=5; j++){
            //         System.out.print("* ");
            //     }
            //     System.out.println();
            // }


            // for(int i = 1; i<=5; i++){
            //     for(int j = 1; j<=i; j++){
            //         System.out.print(j);
            //     }
            //     System.out.println();
            // }

            // for(int i = 1; i<=5; i++){
            //     for(int j = i ; j>=1; j--){
            //         System.out.print(j);
            //     }
            //     System.out.println();
            // }

            for(int i =1; i<=5; i++){
                for(int j=1; j<=5-i+1; j++){
                    System.out.print("*");
                }
                System.out.println();
            }

            

        }

        

        // for(int i = 1; i<=5; i++){
        //     for(int j = 1; j<=i; j++){
        //         System.out.print(j);
        //     }
        //     System.out.println();
        // }
        // for(int i = 1; i<=5; i++){
        //     for(int j = 1; j<=i; j++){
        //         System.out.print("* ");
        //     }
        //     System.out.println();
        // }
        // for(int i = 1; i<=5; i++){
        //     for(int j = 1; j<=5-i+1; j++){
        //         System.out.print(j);
        //     }
        //     System.out.println();
        // }

        // for(int i = 1; i<=5; i++){
        //     for(int j = 1; j<=9-i; j+=2){
        //         System.out.print(j);
        //     }
        //     System.out.println();
        // }
        // (i==1 && j<=5)(j==5 && i==5)(j==9 && i<=5)(j==9 && i>5)
        // for(int i = 1; i<10; i++){
            // for(int j = 1; j<10; j++){
            //     if((j==5 || i==5)){
            //         System.out.print("*");
            //     }
            //     else if((j>5 && i==1)){
            //         System.out.print("*");
            //     }
            //     else if((j==1 && i<5)){
            //         System.out.print("*");
            //     }
            //     else if(j==9 && i>5){
            //         System.out.print("*");
            //     }
            //     else if(i==9 && j<5){
            //         System.out.print("*");
            //     }
            //     else{
            //         System.out.print(" ");
            //     }

                
            // }
            // System.out.println();

        //     for(int j=1; j<10; j++){
        //         if((j==1 && i<5)|| (j==5 && i<5)|| (j>5 && i==1)){
        //             System.out.print("*");
        //         }
        //         else if(i==5 || j == 5){
        //             System.out.print("*");
        //         }
        //         else if((i==9 && j<5) || (j==9 & i>5)){
        //             System.out.print("*");
        //         }
        //         else{
        //             System.out.print(" ");
        //         }

        //     }
        //     System.out.println();
        // }


        // Pascals triangle;
        
        // for(int i = 1; i<=5; i++){
        //     for(int j=0; j<=5-i; j++){
        //         System.out.print(" ");
        //     }

        //     int n = 1;
        //     for(int k = 1; k<=i; k++){
        //         System.out.print(n + " ");
        //         n=n*(i-k)/k;
        //     }
        //     System.out.println();
        // }

    static void py1(int n){
        for(int i=1; i<=n; i++){
            for(int k=0; k<n-i; k++){
                System.out.print(" ");
            }
            for(int j=1; j<=i; j++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    static void py2(int n){
        for(int i=1; i<=n; i++){
            for(int k=1; k<i; k++){
                System.out.print(" ");
            }
            for(int j=1; j<=n-i+1; j++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}


