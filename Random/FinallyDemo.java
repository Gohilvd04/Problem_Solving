
public class FinallyDemo {
    public static void main(String[] args) throws Exception{
        meth1();
        try{
            System.out.println(10/0);
        }
        catch (ArithmeticException e){
            System.out.println(e);
        }
        System.out.println("Final message");

    }

    static void meth1() throws Exception{
        try {
            throw new Exception();
        }
        finally {
            System.out.println("Final msg");
        }

    }
}
