// class ListNode {
//     int val;
//     ListNode next;

//     ListNode() {
//     }

//     ListNode(int val) {
//         this.val = val;
//     }

//     ListNode(int val, ListNode next) {
//         this.val = val;
//         this.next = next;
//     }
// }

public class InsertNode {
    ListNode head ;

    public static void main(String[] args) {

        InsertNode insert = new InsertNode();
        // int[] a = { 2, 3, 4 };
        // insert.create(a);
        insert.insertAtFirst(4);
        insert.insertAtFirst(11);
        insert.insertAtFirst(2);
        insert.insertAtFirst(1);
        // insert.displayList();
        insert.insetAtLast(10);
        insert.insertSorted(5);
        insert.removeLast();
        // System.out.println();
        insert.displayList();
        // System.out.println();
        // insert.insertAtIndex(20, 2);
        // insert.displayList();
        System.out.println(insert.checkSorted());
    }

    void displayList() {
        ListNode p = head;
        while (p != null) {
            System.out.print(p.val + " ");
            p = p.next;
        }
    }

    ListNode insertAtFirst(int val) {
        if (head== null) {
            head=new ListNode(val);
            head.next=null;
        } else {
            ListNode t = new ListNode(val, head);
            head = t;
        }
        return head;
    }

    ListNode insertAtIndex(int val, int index){
        ListNode p = head, q=null,t;
        for(int i=0; i<index-1; i++){
            q=p;
            p=p.next;
        }
        t=new ListNode(val);
        q.next = t;
        t.next = p.next;
        return head;
    }

    ListNode insetAtLast(int val) {
        ListNode t, p = head;
        if (head== null) {            
            head=new ListNode(val);
            head.next = null;
        } else {

            while (p.next != null && p != null) {
                p = p.next;
            }
            t = new ListNode(val, null);
            p.next = t;
        }
        return head;
    }

    ListNode insertSorted(int x){
        ListNode p=head,q=null,temp;

        for(ListNode i=head; i.val<x; i=i.next){
            q=p;
            p=p.next;
        }
        temp = new ListNode(x);
        q.next=temp;
        temp.next = p;


        return head;
    }

    void create(int[] a) {
        ListNode t, last;
        head = new ListNode(a[0], null);
        last = head;

        for (int i = 1; i < a.length; i++) {
            t = new ListNode(a[i], null);
            last.next = t;
            last = t;
        }
    }

    ListNode removeLast(){
        ListNode p = head;

        if(p==null){
            return null;
        }
        if(p.next ==null){
            return null;
        }
        while(p.next.next!=null){
            p=p.next;
        }
        p.next=null;

        return head;
    }
    boolean checkSorted(){
        ListNode p = head;
        int x=Integer.MIN_VALUE;
        while(p!=null){
            if(p.val<x){
                return false;
            }
            x=p.val;
            p=p.next;   
        }
        return true;
        
        
    }
}
