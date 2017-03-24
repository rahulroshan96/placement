// string tokenizer class is deprecated, we can use split() for tokens

import java.util.StringTokenizer;  
public class String2{  
 public static void main(String args[]){  
   StringTokenizer st = new StringTokenizer("my name is rahul"," ");  
     while (st.hasMoreTokens()) {  
         System.out.println(st.nextToken());  
     }  
   }  
}  