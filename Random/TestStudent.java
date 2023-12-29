 
class Student {
    public int roll;
    public String name;
    public String course;
    public int m1,m2,m3;

    Student(int roll,String name,String course,int m1,int m2,int m3){
        this.name=name;
        this.roll=roll;
        this.course=course;
        this.m1=m1;
        this.m2=m2;
        this.m3=m3;
    }
    public int getTotal(){
        return m1+m2+m3;
    }
    public float getAverage(){
        return getTotal()/3f;
    }

}

public class TestStudent {
    public static void main(String[] args) {
        Student s = new Student(4,"Vishal","Computer",97,98,96);
        System.out.println(s.getTotal());
        System.out.println(s.getAverage());
    }
}