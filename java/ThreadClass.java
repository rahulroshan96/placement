import java.util.*;

class A extends Thread{
	public void run(){
		for(int i=0;i<5;i++){
			System.out.println("A");
			try{
				Thread.sleep(500);
			}catch(Exception e){
				
			}
		}
	}
}

class B extends Thread{
	public void run(){
		for(int i=0;i<5;i++){
			System.out.println("B");
			try{
				Thread.sleep(500);
			}catch(Exception e){
				
			}
		}
	}
}

public class ThreadClass{
	public static void main(String[] args){
		A a = new A();
		B b = new B();
		
		a.start();
		try{
			Thread.sleep(10);
		}catch(Exception e){
			
		}
		b.start();
		
	}
}
