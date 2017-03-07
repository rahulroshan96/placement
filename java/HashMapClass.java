import java.util.*;
import java.math.*;

public class HashMapClass{
	
	public static void main(String[] args){
		HashMap<Integer,Integer> mymap = new HashMap<Integer,Integer>();
		
		// add to mymap
		mymap.put(0, 100);
		mymap.put(1, 200);
		mymap.put(3, 300);
		mymap.put(4, 400);
		
		// check if present to mymap
		if(mymap.containsKey(0)){
			System.out.println("key is present");
		}else{
			System.out.println("Key is not present");
		}
		
		// remove from mymap
		mymap.remove(0);
		
		// visit whole mymap
		for(Integer key : mymap.keySet()){
			System.out.println(key + " "+mymap.get(key));
		}
	}
}

