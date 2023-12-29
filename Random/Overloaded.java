class Overloaded{
  static int area (int l,int b){
    return l*b;
  }

  static double area(double radius){
    return Math.PI*radius*radius;
  }

  static int area(int l){
    return l*l;
  }

  static double area(double a, double b, double h){
    return ((a+b)*h)/2d;
  }

  public static void main(String [] args){
    System.out.println(area(5d));
  }
}