class ListNode{
    int val;
    ListNode next;

    ListNode(){ }

    ListNode(int val){
        this.val=val;
    }

    ListNode(int val, ListNode next){
        this.val=val;
        this.next=next;
    }
}

public class MergeList {
    ListNode head1=null;
    ListNode head2=null;
    public static void main(String[] args) {
        int []a={2,5,9,11};
        int []b= {4,6,7,19};

        MergeList merge = new MergeList();

        merge.create1(a);
        merge.create2(b);
        ListNode third = merge.mergingTwoSortedList(merge.head1, merge.head2);
        // ListNode concated = merge.concateTwoList(merge.head1, merge.head2);
        merge.displayList(third);
    }

    void create1(int []a){
        ListNode t,last;
        head1 = new ListNode(a[0]);
        last=head1;

        for(int i=1; i<a.length; i++){
            t=new ListNode(a[i]);
            last.next=t;
            last=t;
        }
    }
    void create2(int []b){
        ListNode t,last;
        head2 = new ListNode(b[0]);
        last=head2;

        for(int i=1; i<b.length; i++){
            t=new ListNode(b[i]);
            last.next=t;
            last=t;
        }
    }

    ListNode mergingTwoSortedList(ListNode head1, ListNode head2){
        ListNode last=null, third=null;

        if(head1.val<head2.val){
            third=head1;
            last=head1;
            head1=head1.next;
            last.next=null;
        }
        else{
            third=head2;
            last=head2;
            head2=head2.next;
            last.next=null;
        }

        while(head1!=null && head2!=null){
            if(head1.val<head2.val){
                last.next=head1;
                last=head1;
                head1=head1.next;
                last.next=null;
            }
            else{
                last.next=head2;
                last=head2;
                head2=head2.next;
                last.next=null;
            }
        }

        if(head1!=null) last.next=head1;
        else last.next=head2;

        return third;
    }

    void displayList(ListNode third){
        ListNode p =third;
        while(p!=null){
            System.out.print(p.val+" ");
            p=p.next;
        }
    }

    ListNode concateTwoList(ListNode head1,ListNode head2){
        ListNode t=head1;
        while(t.next!=null){
            t=t.next;
        }
        t.next=head2;
        return head1;
    }
}
