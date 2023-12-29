
class ListNode{
    int val;
    ListNode next;

    ListNode(){}

    ListNode(int val){
        this.val=val;
    }
    
    ListNode(int val,ListNode next){
        this.val=val;
        this.next= next;
    }
    
}

public class Display{
    static ListNode head = new ListNode(0);
    public static void main(String[] args) {
        int []arr = {2,5,1,6};
        // Display dp = new Display();
        create(arr, 4);
        displayList();

    }

    public static void create(int []arr,int n){
        ListNode t,last;
        head  = new ListNode(arr[0]);
        last = head;

        for(int i =1; i<n; i++){
            t= new ListNode(arr[i]);
            last.next=t;
            last = t;
        }
    }

    static void displayList(){
        ListNode p=head;
        while(p!=null){
            System.out.print(p.val+" ");
            p=p.next;
        }
    }

}