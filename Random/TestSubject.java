 
class Subject {
        private String subId;
        private String name;
//        private int maxMarks;
        private int marksObtain;

        public Subject(String subId, String name, int marksObtain) {
                this.subId = subId;
                this.name = name;
//                this.maxMarks = maxMarks;
                this.marksObtain = marksObtain;
        }

        public String getSubId() {
                return subId;
        }

        public String getName() {
                return name;
        }

//        public int getMaxMarks() {
//                return maxMarks;
//        }

        public int getMarksObtain() {
                return marksObtain;
        }

//        public void setMaxMarks(int maxMarks) {
//                this.maxMarks = maxMarks;
//        }

        public void setMarksObtain(int marksObtain) {
                this.marksObtain = marksObtain;
        }
//        boolean isQualified(int marks){
//                return marks>=maxMarks/10*4;
//        }
        public String toString(){
                return "\n Subject Id :"+subId+"\n Name : "+name+"\n Obtain marks:"+marksObtain;
        }
}
public class TestSubject{
        public static void main(String[] args) {
                Subject []s=new Subject[3];
                s[0]=new Subject("s101","Vishal",100);
                s[1]=new Subject("s102","Chirag",100);
                s[2]=new Subject("s103","Raju",100);

                for (Subject s1:s){
                        System.out.println(s1);
                }
        }
}

