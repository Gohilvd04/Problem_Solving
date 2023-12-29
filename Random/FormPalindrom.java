public class FormPalindrom {
    public static void main(String[] args) {
        
    }
    static int palindrom(String str, int l, int h){

        if(l>=h) return 0;
        return (str.charAt(l)==str.charAt(h))?palindrom(str, l+1, h-1):-1;
    }
}
