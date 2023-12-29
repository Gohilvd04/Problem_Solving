abstract class Shape{
    abstract public double perimeter();
    abstract public double area();
}
class Circle1 extends Shape{
    double r;
    public double perimeter(){
        return 2*Math.PI*r;
    }
    public double area(){
        return Math.PI*r*r;
    }
}
class Rectangle1 extends Shape{
    double l,b;
    public double perimeter(){
        return 2*(l+b);
    }
    public double area(){
        return l*b;
    }
}
public class Abstract {
    public static void main(String[] args) {
        Rectangle r = new Rectangle();
        // Circle1 c = new Circle1();
        // Shape s2 = new Circle1();
        // Shape s= new Rectangle1();
        r.l=4;
        r.b=5;
        System.out.println(r.getArea());


    }
}
