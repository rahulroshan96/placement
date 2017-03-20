import java.io.IOException;

// The Java "throws" keyword is used to declare an exception. It gives an information 
// to the programmer that there may occur an exception so it is better for the programmer 
// to provide the exception handling code so that normal flow can be maintained.

// Note: throws is basically used to handle compiletime/checked exception at the propagate time
class ExceptionHandling4{
	
		public static void C() throws IOException{
//			throw new ArithmeticException("Throw Unchecked Exception");
			throw new IOException("Throw Checked Exception");
		}
	
		public static void B() throws IOException{
			C();
		}
	
		public static void A(){
//			B();
			try{ // we can use only B() in case of checked Exception, In that case checked will become unchecked Exception
				B(); // then we have to use "throws IOException" to all the propagate methods
			}catch(Exception e){
				System.out.println(e.getMessage());
			}
		}

		public static void main(String []args){
		A();
	}
}

