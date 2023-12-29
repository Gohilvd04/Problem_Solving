
public class IsLoopList {
    ListNode head= null;

    public static void main(String[] args) {
        int []a= {1,3,4,2,1};
        IsLoopList loop = new IsLoopList();
        loop.create(a);
        loop.displayList();
        System.out.println(loop.isLoop());
    }

    void create(int []a){
        ListNode t,last;
        head= new ListNode(a[0]);
        last=head;

        for(int i =1; i<a.length; i++){
            t=new ListNode(a[i]);
            last.next=t;
            last=t;
        }
        // last.next=head.next;
    }

    void displayList(){
        ListNode p=head;
        while(p!=null){
            System.out.print(p.val+" ");
            p=p.next;
        }
    }
    boolean isLoop(){
        ListNode p=head,q=head;
        do{
            p=p.next;
            q=q.next;
            q=q!=null?q.next:null;
        }while(p!=null && q!=null);

        if(p==q) return true;
        else return false;
    }
}
