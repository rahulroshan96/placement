
//Uncheck / Runtime Exceptions propogates through methods
//Checked / Compiletime Exceptions do not propogates through methods 
import java.util.*;

class ExceptionHandling3{
	
		public static void C(){
			throw new ArithmeticException("Throw Unchecked Exception");
//			throw new java.io.IOException("Throw Checked Exception");
		}
	
		public static void B(){
			C();
		}
	
		public static void A(){
			try{
				B();
			}catch(Exception e){
				System.out.println(e.getMessage());
			}
		}
	
		public static void main(String []args){
		A();
	}
}

