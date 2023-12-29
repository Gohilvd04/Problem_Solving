public class DoublyList {
    class DoubleNode{
        DoubleNode prev;
        int val;
        DoubleNode next;

        DoubleNode(){

        }
        DoubleNode(int val){
            this.val = val;
        }
        DoubleNode(DoubleNode prev, int val,DoubleNode next){
            this.prev = prev;
            this.val = val;
            this.next=next;
        }
    }
    DoubleNode head=null;
    public static void main(String[] args) {
        DoublyList d = new DoublyList();
        d.insertLast(1);
        d.insertLast(1);
        d.insertLast(1);

        d.displayDoubly();

    }
    void displayDoubly(){
        DoubleNode p=head;
        while(p!=null){
            System.out.print(p.val+" ");
            p=p.next;
        }
    }
    
    DoubleNode insertLast(int x){
        DoubleNode last=head,t;
            head=new DoubleNode(null,x,null);
            last=head;
            last.next=null;

            while(last.next!=null && last!=null){
                last=last.next;
            }
            t = new DoubleNode(last,x, null);
            last.next = t;
        return head;
    }
}
