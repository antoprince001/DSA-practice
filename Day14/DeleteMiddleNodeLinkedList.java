class Node<D>{
    D data;
    Node next;
    
    
    Node(D a){
        this.data = a;
        this.next = null;
    }
}

public class Main{
    
    public static void main(String args[]){
        Node<Integer> head = new Node<Integer>(1);
        
        Node<Integer> second = new Node<Integer>(2);
        head.next = second;
        
        Node<Integer> third = new Node<Integer>(3);
        second.next = third;
        
        Node<Integer> fourth = new Node<Integer>(4);
        third.next = fourth;
        
        System.out.println(head.data+"");
        System.out.println(head.next.data+"");
        
        
        int n = 4,c=1;
        Node<Integer> temp = head;
        while(temp != null){
            if(c == n/2){
                temp.next = temp.next.next;
                break;
            }
            temp = temp.next;
            c++;
        }
        
         System.out.println(head.data+"");
        System.out.println(head.next.data+"");
        System.out.println(head.next.next.data+"");
        
        
        
    }
} 
