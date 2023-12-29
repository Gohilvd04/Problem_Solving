
class Phone1 {
    public void call(){
        System.out.println("Phone call");
    }
    public void sms(){
        System.out.println("Phone sms");
    }
}
interface Camera{
    void click();
    void record();
}
interface MusicPlayer{
    void play();
    void pause();
}
class SmartPhone1 extends Phone1 implements Camera,MusicPlayer{
    public void videoCall(){
        System.out.println("SmartPhone is making video call");
    }
    public void click(){
        System.out.println("SmartPhone is clicking");
    }
    public void record(){
        System.out.println("SmartPhone is recording");
    }
    public void play(){
        System.out.println("SmartPhone is playing");
    }
    public void pause(){
        System.out.println("SmartPhone is paused");
    }
}
public class InterfaceExample {
    public static void main(String[] args) {
        Phone1 sp = new SmartPhone1();
        sp.call();
//        sp.videoCall();

    }
}
