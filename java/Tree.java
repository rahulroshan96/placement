class Node{
		int data;
		Node left;
		Node right;
		
		public static Node newNode(int no){
			Node n = new Node();
			n.data = no;
			n.left = null;
			n.right = null;
			return n;
		}
	}

public class Tree {
	public Node addNode(int data, Node head){
		Node tempHead = head;
		Node n = Node.newNode(data);
		
		Node prev = null;
		if (head == null){
			head = n;
			return head;
		}
		while(head!=null){
			prev = head;
			if(head.data > n.data){
				head = head.left;
			}else{
				head = head.right;
			}
		}
		if(n.data < prev.data){
			prev.left = n;
		}else{
			prev.right = n;
		}
		return tempHead;
	}
	
	public void inorder(Node root){
		if(root!=null){
			inorder(root.left);
			System.out.println(root.data);
			inorder(root.right);
		}
	}
	
	public static void main(String[] args){
		Tree t = new Tree();
		Node root = null;
		root = t.addNode(5, root);
		root = t.addNode(3, root);
		root = t.addNode(4, root);
		root = t.addNode(1, root);
		root = t.addNode(7, root);
		root = t.addNode(9, root);
		t.inorder(root);
		
//		System.out.println(root.data);
	}	
}
