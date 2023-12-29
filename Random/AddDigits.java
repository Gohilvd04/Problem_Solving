public class AddDigits {
    static int  addDigit(int n){
        int last,s=0;
        while(n>0){
            last = n%10;
            n=n/10;
            s+=last;
        }
        if (s<10){
            return s;
        }
        return addDigit(s);
    }
    public static void main(String[] args) {
        System.out.println(addDigit(76));
    }
}
