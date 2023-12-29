class PbJava {
    public static void main(String[] args) {
        int i = 150;
        String ans = "";

        while(i!=0){
            if(i%2==0){
                ans += "1";
                i/=2;
            }
            else {
                ans += "0";
                i/=2;
            }
        }

        System.out.println(ans);
    }
}