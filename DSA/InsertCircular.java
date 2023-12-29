public class InsertCircular {
    ListNode head=null;
    public static void main(String[] args) {
        int []a={4,6,1,3};
        InsertCircular insert = new InsertCircular();
        insert.create(a);
        insert.insertBeforeFirst(10);
        insert.displayList();
    }
    void create(int []a){
        ListNode t,last;
        head=new ListNode(a[0]);
        head.next=head;
        last=head;

        for(int i=1; i<a.length; i++){
            t=new ListNode(a[i],last.next);
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

    ListNode insertBeforeFirst(int val){
        ListNode p=head,t=new ListNode(val,head);
        while(p.next!=head){
            p=p.next;
        }
        p.next=t;
        // There is no need to change head .. if u want to change u can;
        return head;
    
    }
}
