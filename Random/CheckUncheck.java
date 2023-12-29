public class CheckUncheck {
    public static void main(String[] args) {
        fun1();
    }
    static void fun1(){
        int r;
        try {
           r=area(-10, 5);
            System.out.println("Area is :"+r);
        }
        catch (Exception e)
        {
            System.out.println(e);
        }
    }
    static int  area(int a,int b)throws Exception{
        int c;
        if (a<0 || b<0)
           throw new Exception("Dimensions cannot be negative");

        c = a * b;
        return c;
    }

}
