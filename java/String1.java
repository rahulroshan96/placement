/*Two types of strings, mutable and immutable
String class implements Serializable, Comparable, CharSequence interfaces
CharSequence is implemented by String, StringBuffer, StringBuilder classes

equals() method of Object class: compares based on memory locations
equals() method of String class: compares based on the content of object

StringBuffer class does not override Object class equals() method

Three ways to compare strings:
1. == : compares the references
2. equals() : compares the content of both strings
3. compareTo() : uses ==, <, > operators and return 0,+ve and -ve.
*/

import java.*;

public class String1 {
	public static void main(String[] args){
		String s1 = "rahul"; // created in string constant pool
		String s2 = "rahul"; // since the content of both string same, s1 and s2 points to same memory
		
		String s3 = new String("rahul"); // another way to create string
		String s4 = new String("rahul");
		
		StringBuilder s5 = new StringBuilder("chip");
		
		// String override equals method, therefore its behaviour is different
		s1.equals(s2); // true, since content is same
//		s1 == s2; // true, since reference is same
//		s3 == s4; // false, since references are different
		System.out.println(s3.compareTo(s4)); // true, since compareTo() uses == as content comparision
		
		// string concatenation, string are immutable so when we concatenate two strings it creates new string
		System.out.println(s3.concat(" roshan")+ " "+s3); // s3 is still "rahul" only
		System.out.println(s5.append(" mark")+" "+s5); // but works with StringBuilder and StringBuffer
		
	}
}
