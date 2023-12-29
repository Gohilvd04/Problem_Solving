// class ListNode {
//     int val; 
//     ListNode next; 

//     ListNode (){}

//     ListNode(int val){
//         this.val = val; 
//         this.next = null;
//     }

//     ListNode (int val, ListNode next){
//         this.val = val; 
//         this.next = next;
//     }

// }
public class RecursiveDisplay {
    static ListNode head = new ListNode();
    public static void main(String[] args) {
        int []a = {4,5,1,6};
        create(a, 4);
        recursiveDisplay(head);
    }

    static void create(int []a, int n){
        ListNode t,last;
        head = new ListNode(a[0],null);
        last=head;
        
        for (int i=1; i<n; i++){
            t= new ListNode(a[i]);
            last.next=t;
            last=t;
        }
    }

    static void recursiveDisplay(ListNode p){
        if(p==null) return;
        
        System.out.print(p.val+ " ");
        recursiveDisplay(p.next);
    }
}