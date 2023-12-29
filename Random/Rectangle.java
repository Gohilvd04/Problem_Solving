 

public class Rectangle {
    public int l;
    public int b;

    Rectangle(){
        System.out.println("This is rectangle class Constructor!!!");
    }
    Rectangle(int l,int b){
        this.l=l;
        this.b=b;
    }
    public int getArea(){
        return l*b;
    }
    public int getPerimeter(){
        return 2*(l+b);
    }
}

class Test{
    public static void main(String[] args) {
        Rectangle r = new Rectangle(3,4);
        System.out.println(r.getArea());
        System.out.println(r.getPerimeter());
    }
}
