import java.util.*;
import java.math.*;

public class ArrayListClass{
	public static void main(String[] args){
		
		ArrayList<Integer> a = new ArrayList<Integer>();
		
		// add elements
		a.add(100);
		a.add(200);
		a.add(150);
		a.add(125);
		
		// sort in increasing order
		Collections.sort(a);
		
		// remove element
		a.remove(2);
		
		// check if element is present
		if(a.contains(100)){
			System.out.print("100 is presents\n");
		}else{
			System.out.print("100 is not present\n");
		}
		
		// check index of the element
		System.out.print("150 is present at index "+a.indexOf(150));
		
		
		// sort in decreasing order
		Collections.sort(a, Collections.reverseOrder());
		
		for(int i=0;i<a.size();i++){
			System.out.print("\n"+a.get(i)+" ");
		}
	}
}

