import java.util.*;
import java.math.*;

public class LinkedListClass{
	
	class Node{
		int data;
		Node next;
	}
	
	Node getNode(int d){
		Node n = new Node();
		n.data = d;
		n.next = null;
		return n;
	}
	public static void main(String[] args){
		LinkedListClass t = new LinkedListClass();
		Node n = t.getNode(100);
		n.next = t.getNode(200);
		n.next.next = t.getNode(300);
		Node temp = n;
		
		while(temp!=null){
			System.out.print(temp.data+" ");
			temp = temp.next;
		}
	}
}

