import java.util.*;
import java.math.*;

public class StackClass{
	public static void main(String[] args){
		
		Stack<Integer> s = new Stack<Integer>();
		
		// push elements to stack
		s.push(100);
		s.push(200);
		s.push(150);
		
		// pop elements from stack
		s.pop();
		
		// get top element from stack
		System.out.print(s.peek());
		
		while(!s.isEmpty()){
			System.out.println(s.peek());
			s.pop();
		}
	}
}

