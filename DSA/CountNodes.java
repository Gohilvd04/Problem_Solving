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

public class CountNodes {

    ListNode head = new ListNode();

    public static void main(String[] args) {
        int[] arr = { 9, 5, 2, 6, 7 ,99};
        CountNodes countNode = new CountNodes();
        countNode.create(arr, 6);
        System.out.println("No. of nodes in the list is " + countNode.count());
        countNode.display();
    }

    void create(int[] a, int n) {
        ListNode t, last;
        head = new ListNode(a[0]);
        last = head;

        for (int i = 1; i < n; i++) {
            t = new ListNode(a[i]);
            last.next = t;
            last = t;
        }
    }

    int count(){
        ListNode p = head;
        int c = 0;
        while(p!=null){
            c++;
            p=p.next;
        }
        return c;
    }

    void display(){
        ListNode p = head;
        while(p!=null){
            System.out.print(p.val + " ");
            p=p.next;
        }
    }
}
