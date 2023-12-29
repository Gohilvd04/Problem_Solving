import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.*;
import java.util.Arrays;


// class Student {
//     int age;
//     String name;
    
//     public Student(int age, String name) {
//         this.age = age;
//         this.name = name;
//     }

//     public String toString() {
//         return "Student [ age = " + age + ", name = " + name + " ]";
//     }

    
// }
public class ComparatorPractice {

    public static void main(String[] args) {

        // Comparator<int[]> comp = new Comparator<int []>() {

        //     public int compare(int[] a, int[] b){
        //         if(a[1]>b[1])
        //             return 1;
        //         else
        //             return -1;
        //     }
        // };

        // List<Student> students = new ArrayList<>();
        // students.add(new Student(20, "Vishal"));
        // students.add(new Student(20, "Vraj"));
        // students.add(new Student(22 , "Chirag"));
        // students.add(new Student(24, "Raju"));
        // students.add(new Student(19, "Ankit"));
        

        // Collections.sort(students,com);
        // // System.out.println(student);
        // for(Student s : students){
        //     System.out.println(s);
        // }\

        int [][] jobs ={{2,20},{2,40},{2,10}};

        Arrays.sort(jobs,(a,b)-> Integer.compare(b[1],a[1])); // for sorting in descending order;

        for(int i=0; i<jobs.length; i++){
            for(int j=0; j<jobs[0].length; j++){
                System.out.print(jobs[i][j]+ " ");
            }
            System.out.println();
        }
    }
}
