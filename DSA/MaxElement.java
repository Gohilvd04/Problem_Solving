// class ListNode{
//     int val;
//     ListNode next;

//     ListNode(){}

//     ListNode (int val){
//         this.val=val;
//         this.next= null;
//     }

//     ListNode(int val, ListNode next){
//         this.val=val;
//         this.next= next;
//     }
// }
public class MaxElement {
    static ListNode head = new ListNode();
    public static void main(String[] args) {
        int []a= {1,2,3,4};
        create(a, 4);
        System.out.println(max(head));
    }

    static void create (int []a, int n){
        ListNode t,last;
        head = new ListNode(a[0]);
        last = head;

        for (int i=1; i<n; i++){
            t=new ListNode(a[i]);
            last.next=t;
            last=t;
        }
    }

    static int max(ListNode p){
        int max=Integer.MIN_VALUE;

        while(p!=null){
            if(max<p.val){
                max=p.val;
            }
            p=p.next;
        }
        return max;
    }
}
