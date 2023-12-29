public class CircularList {
    ListNode head=null;
    public static void main(String[] args) {
        int []a= {4,6,1,3};
        CircularList list = new CircularList();
        list.create(a);
        list.displayList();
    }

    void create(int []a){
        ListNode t,last;
        head=new ListNode(a[0]);
        head.next=head;
        last=head;

        for(int i=1; i<a.length; i++){
            t=new ListNode(a[i]);
            t.next=last.next;
            last.next=t;
            last=t;      
        }
    }

    void displayList(){
        ListNode p=head;
        do{
            System.out.print(p.val+" ");
            p=p.next;
        }while(p!=head);
    }
}
