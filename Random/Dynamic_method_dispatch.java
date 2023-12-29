
class Phone{
    public void name(){
        System.out.println("My name Simple Phone");
    }
    public void greet(){
        System.out.println("Good Morning");
    }
}
class SmartPhone extends Phone{
    public void welcome(){
        System.out.println("You are welcomed");
    }
    public void name(){
        System.out.println("My name is SmartPhone");
    }
}

public class Dynamic_method_dispatch {
    public static void main(String[] args) {
        Phone obj = new SmartPhone();  // allowed ...... created object of smartphone
        obj.name();
    }
}
