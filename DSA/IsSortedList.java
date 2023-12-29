
public class IsSortedList {
    ListNode head=null;
    public static void main(String[] args) {
        int []a = {1,2,3,4,5};
        IsSortedList sorted = new IsSortedList();
        sorted.create(a);
        // System.out.println(sorted.lengthOfList());
        // sorted.removeDuplicate();
        // sorted.reverseListElement();
        // sorted.reverseListLink();
        sorted.displayList();
    }
    void create(int a[]){
        ListNode t,last;
        head = new ListNode(a[0]);
        last = head;

        for(int i=1; i<a.length; i++){
            t=new ListNode(a[i]);
            last.next=t;
            last=t;
        }
    }

    void displayList(){
        ListNode p=head;
        while(p!=null){
            System.out.print(p.val+" ");
            p=p.next;
        }
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

    ListNode removeDuplicate(){

        ListNode p=head,q=head.next;
        while(q!=null){
            if(p.val!=q.val){
                p=q;
                q=q.next;
            }
            p.next=q.next;
            q=p.next; 
        }
        return head;
    }
    int lengthOfList(){
        ListNode p=head;
        int length=0;
        while(p!=null){
            length++;
            p=p.next;
        }
        return length;
    }

    ListNode reverseListElement(){
        int i=0;
        int length=lengthOfList();
        int []a=new int [length];
        ListNode p=head;

        while(p!=null){
            a[i]=p.val;
            p=p.next;
            i++;
        }
        p=head;
        i--;
        while(p!=null){
            p.val=a[i--];
            p=p.next;
        }

        return head;
    }
    ListNode reverseListLink(){
        ListNode p = head,q=null,r=null;

        while(p!=null){
            r=q;
            q=p;
            p=p.next;
            q.next=r;
        }
        head=q;
        return head;
    }

    void reverseListRec(ListNode p,ListNode q){
        if(p!=null) {
            reverseListRec(p,p.next);
            p.next=q;
        }
        else{
            head=q;
        }
    }
}
