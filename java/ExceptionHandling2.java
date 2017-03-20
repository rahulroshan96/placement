import java.util.*;

class ExceptionHandling2{
	
	public static void validate(int age){
		if(age < 18){
			throw new ArithmeticException("age not valid"); // throw Unchecked Exception
		}else{
			System.out.println("welcome to vote");
		}
	}
	
	public static void main(String []args){
		try{
				validate(13);
		}catch(ArithmeticException e){
			e.printStackTrace();
		}
	}
}