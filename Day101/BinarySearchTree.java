import java.util.*;
class Node{
    int data;
    Node left;
    Node right;
    Node(int data){
        this.data = data;
        this.left = null;
        this.right = null;
    }
}
class BST{
    Node root;
    
    public void insertrec(int data){
        this.root = insert(this.root,data);
    }
    
    public Node insert(Node head,int data){
        if(head == null){
            head = new Node(data);
            return head;
        }
        if(head.data > data){
           head.left = insert(head.left,data);
        }
        else if(head.data <data) {
            head.right = insert(head.right,data);
        }
        return head;
    }
    
    
}
public class Main
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int data = s.nextInt();
		BST tree = new BST();
		
		tree.insertrec(data);
		tree.insertrec(2);
		tree.insertrec(5);
		System.out.println(tree.root.data);
		System.out.println(tree.root.left.data);
		System.out.println(tree.root.right.data);
	}
}
