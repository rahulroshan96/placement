import java.util.ArrayList;
import java.util.HashMap;

public class Map {
	public static void main(String[] args){
		HashMap<Integer, Integer> myhash = new HashMap<>();
		
		myhash.put(0, 100);
		myhash.put(1, 200);
		myhash.put(2, 300);
		myhash.put(3, 400);
		
		if(myhash.containsKey(0)){
			myhash.remove(0);
		}
		
		
		for (Integer key : myhash.keySet()){
			System.out.println(myhash.get(key));
		}
		

		ArrayList<Integer> al = new ArrayList<Integer>();
		ArrayList<Integer> all = new ArrayList<Integer>();
		
		System.out.println(al.hashCode() + " "+all.hashCode());
		
	}
}
