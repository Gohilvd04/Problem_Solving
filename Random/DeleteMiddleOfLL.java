import java.util.ArrayList;

public class DeleteMiddleOfLL {
    public static void main(String[] args) {
        List.fill();
        delete(List.list);
        System.out.println(List.list);
    }

    public static void delete(ArrayList<Integer> list){
        list.remove(list.size()/2);
    }
}

class List{
    static ArrayList<Integer> list = new ArrayList<>();
    public static void fill(){
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);
        list.add(5);
    }
}