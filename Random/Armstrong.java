class Armstrong{
    public static void main(String[] args) {
        int n = 153;
        int temp = n;
        int arm = 0;

        while(temp > 0){
            int rem = temp % 10;
            if(rem == 0) break;
            arm += Math.pow(rem,3);
            temp/=10;
        }
        if(arm==n) System.out.println("Yes");
        else System.out.println("No");
    }
}