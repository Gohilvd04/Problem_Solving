public class GCD {
    public static void main(String[] args) {
        System.out.println(gcdOfNum(15,25));
    }
    static int gcdOfNum(int x,int y){
        while (x!=y) {
            if (x > y) {
                x = x - y;
            } else if (y > x) {
                y = y - x;
            }
        }
        return x;
    }
}
