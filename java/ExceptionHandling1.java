// simple try catch finally block
import java.util.*;

class ExceptionHandling1{
	
	public static String convert(){
		String s = null;
		s.toString();
		return s;
	}
	
	public static void main(String []args){
		try{
			String s = convert();
		}catch(NullPointerException e){
			System.out.println("found NullPointerException!!!");
		}finally{
			System.out.println("In the end");
		}
	}
}
