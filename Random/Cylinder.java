
 

public class Cylinder {
    public double radius;
    public int height;

    Cylinder(double radius,int height){
        this.height=height;
        this.radius=radius;
    }
    public double getVolume(){
        return Math.PI*radius*radius*height;
    }
    public double getSurface(){
        return 2*Math.PI*radius*(radius+height);
    }

}
class TestCylinder{
    public static void main(String[] args) {
        Cylinder c = new Cylinder(2.3,3);
        System.out.println(c.getVolume());
        System.out.println(c.getSurface());

    }
}

