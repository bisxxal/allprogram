package collection_Framwork;

public class linkedlist_implemention {
    Node head;

   public class Node{
        int data;
        Node next;
        Node(int data){
            this.data = data;
            this.next = null;
        }
    }
    public void addFirst(int ele){
        
            Node newNode = new Node(ele);
            if(head == null){
                head = newNode;
                // head.next = null;
            }
            newNode.next = head;
            head = newNode;
        }
        public void insert(int ele){
         Node newNode = new Node(ele);
            if(head == null){
                head = newNode;
                // head.next = null;
            }
            else{
              Node curr = head;
              while(curr.next != null){
                    // System.out.println(curr.data);
                    curr = curr.next;
                }
                curr.next = newNode;
                // newNode.next = null;
            }
        }
        public void display(){
            if (head == null){
                return;
            }
            else{
                Node curr = head;
                while(curr != null){
                    System.out.print(curr.data+"  ");
                    curr = curr.next;
                }
                System.out.println();
            }
        }
        public void deleteAtFirst (){
            if (head == null){
                return;
            }
            else{
                
                head = head.next;
            }
        }
        public void deleteAtLast(){
            if (head == null){
                return;
            }
            if(head.next == null){
                head = null;
            }
            else{
                Node curr = head;
                Node curr1 = null;
                while(curr.next != null){
                    curr1 =curr;
                    curr = curr.next;
                }
                curr1.next = null;
            }
        }
       
    public static void main(String[] args) {
      linkedlist_implemention l = new linkedlist_implemention();

      l.insert(1);
      l.insert(5);
      l.insert(12);
      l.insert(7);
      l.addFirst(90);

      l.display();
      System.out.println("after delete ");
      l.deleteAtFirst();
      l.deleteAtLast();
      l.display();

    }
    
}
