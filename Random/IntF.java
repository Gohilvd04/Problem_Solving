public class IntF {
    public static void main(String[] args) {
        A1 a;
        a = new c1();
        a.display("ss");
        a = new c2();
        a.display("ss");
        a = new c3();
        a.display("ss");
    }
}

interface A1 {
    void display(String s);
}

class c1 implements A1 {
    public void display(String s) {
        System.out.println("c1:- "+s);
    }
}

class c2 implements A1 {
    public void display(String s) {
        System.out.println("c2:- "+s);
    }
}

class c3 implements A1 {
    public void display(String s) {
        System.out.println("c3:- "+s);
    }
}
