import java.util.*;

class T implements Cloneable{
	int x;
	
	public Object clone() throws CloneNotSupportedException{
		return super.clone();
	}
}


class MakeClone{
	public static void main(String []args){
		
		T t = new T();
		t.x = 100;
		
		T t2 = t;
		
		try{
			T t1 = (T) t.clone();
			System.out.println(t1.x);
			System.out.println(t2.hashCode() + " "+t.hashCode()+" "+t1.hashCode());
		}catch(CloneNotSupportedException c){	
		}
	}
}
