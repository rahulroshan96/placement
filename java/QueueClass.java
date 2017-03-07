import java.util.*;
import java.math.*;

public class QueueClass{
	public static void main(String[] args){
		
		Queue<Integer> myQ = new LinkedList<Integer>();
		
		// enqueue elements to queue
		myQ.add(100);
		myQ.add(200);
		myQ.add(150);
		myQ.add(300);
		
		// dequeue elements from queue
		myQ.remove();
		
		// get front element from queue
		System.out.print(myQ.peek()+" ");
		
		while(!myQ.isEmpty()){
			System.out.print(myQ.peek()+" ");
			myQ.remove();
		}
	}
}

