 
class Sphere{
    double radius;
    double X;
    double Y;
    double Z;

    public Sphere() {
        this.radius=1;
    }

    public Sphere(double radius) {
        this.radius = radius;
    }

    public Sphere(double radius, double x, double y, double z) {
        this.radius = radius;
        X = x;
        Y = y;
        Z = z;
    }

    void display(){
        System.out.println("Radius :"+ radius + "Coordinate X :"+X);
    }
    void scale(double r){
        radius+=r;
    }
    void move(double x,double y, double z){
        X=x;
        Y=y;
        Z=z;
    }
}
public class SphereDemo {
    public static void main(String[] args) {
        Sphere s = new Sphere(10);
        System.out.println(s.radius);
    }
}
