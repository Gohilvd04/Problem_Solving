class Node {
    int val;
    Node next;

    Node(){
        
    }

    Node(int val){
        this.val = val;
        this.next = null;
    }

    static Node head;

    public static void addFront(int val){
        if(head==null){
            head.val = val;
            head.next = null;
            return;
        }

        Node temp = new Node(val);
        temp.next = head;
        head = temp;
    }

    public static void display(){
        Node temp = head;

        while(temp!=null){
            System.out.print(temp.val + " ");
            temp = temp.next;
        }
    }

    public static void main(String[] args) {
        head = null;
        head.addFront(5);
        head.display();
    }
}