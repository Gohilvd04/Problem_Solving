class Super{
    void display(){
        System.out.println("Super class Display");
    }
}
class Sub extends Super{
    void display(){
        System.out.println("Sub class display , Display method override");
    }
}
public class Overriding {
    public static void main(String[] args) {

    }

}
class Tv{
    public void switchOn(){
        System.out.println("Tv switched ON");
    }
    public void changeChannel(){
        System.out.println("Tv channel is changed");
    }
}
class SmartTv extends Tv{
    public void switchOn(){
        System.out.println("Smart Tv switched ON");
    }
    public void changeChannel(){
        System.out.println("Smart Tv Channel is changed");
    }
    public void Browse(){
        System.out.println("Browse in Smart Tv");
    }
}