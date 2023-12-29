interface Test1 {
    void meth1();
    void meth2();
}
class My implements Test1{
   public void meth1(){
        System.out.println("1");
    }
   public void meth2(){
        System.out.println("2");
    }
    public void meth3(){
        System.out.println("3");
    }
}
public class InterfacePractice {
    public static void main(String[] args) {
        // Test1 t=new My();
        // My m = new My();

    }
}
