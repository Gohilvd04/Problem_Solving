// class ListNode{
//     int val;
//     ListNode next;

//     ListNode(){}

//     ListNode(int val){
//         this.val=val;
//         this.next= null;
//     }

//     ListNode(int val, ListNode next){
//         this.val=val;
//         this.next=next;
//     }
// }

public class SumOfAllElement {
    static ListNode head = new ListNode();
    public static void main(String[] args) {
        int arr[]={7,3,2,1};

        create(arr, 4);
        int sum =sum(head);
        System.out.println(sum);
    }

    static void create(int []a,int n){
        ListNode t, last;
        head= new ListNode(a[0]);
        last=head;

        for(int i=1; i<n; i++){
            t= new ListNode(a[i]);
            last.next=t;
            last=t;
        }
    }

    static int sum (ListNode p){
        int sum =0;
        while(p!=null){
            sum+=p.val;
            p=p.next;
        }
        return sum;
    }
}
