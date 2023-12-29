// class ListNode{
//     int val; 
//     ListNode next;

//     ListNode(){}

//     ListNode(int val){
//         this.val= val;
//     }

//     ListNode (int val, ListNode next){
//         this.val=val;
//         this.next = next;

//     }
// }

public class RemoveNode {
    ListNode head ;

    public static void main(String[] args) {
        int []a={1,2,3,4,5};
        
        RemoveNode remove = new RemoveNode();
        remove.create(a);
        // remove.removeLast();
        // remove.removeFirst();
        remove.displayList();
        remove.removeIndex(5);
        System.out.println();
        remove.displayList();
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
    void displayList() {
        ListNode p = head;
        while (p != null) {
            System.out.print(p.val + " ");
            p = p.next;
        }
    }

    ListNode removeLast(){
        ListNode p = head;

        if(head==null){
            return null;
        }
        if(head.next ==null){
            return null;
        }
        while(p.next.next!=null){
            p=p.next;
        }
        p.next=null;

        return head;
    }

    ListNode removeFirst(){
        ListNode p= head;
        if(p==null) return null;
        if(p.next==null) return null;

        head=head.next;
        p.next=null;
        return head;
    }

    ListNode removeIndex(int index){
        ListNode p = head,q=null;
        if(index<=0) return null;
        if(index==1){
            return head=head.next;
        }
        for (int i=0; i<index-1; i++){
            q=p;
            p=p.next;
        }
        q.next=p.next;
        return head;
    }
}
