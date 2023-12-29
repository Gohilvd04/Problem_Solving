public class RemoveCircular {
    ListNode head=null;
    public static void main(String[] args) {
        int [] a = {4,6,1,7,2};
        RemoveCircular remove = new RemoveCircular();
        remove.create(a);
        remove.removeHead();
        remove.displayList();
    }

    void create(int []a){
        ListNode t,last;
        head = new ListNode(a[0]);
        head.next=head;
        last=head;

        for(int i=1; i<a.length; i++){
            t= new ListNode(a[i] ,head);
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

    ListNode removeHead(){
        ListNode p=head;
        while(p.next!=head){
            p=p.next;
        }
        p.next=head.next;
        head = p.next;
        return head;
    }
}
