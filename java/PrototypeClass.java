interface Prototype{
	public Prototype getClone();
}

class PrototypeGen implements Prototype{
	String name;
	int age;
	
	PrototypeGen(String x, int n){
		name = x;
		age = n;
	}
	
	public void show(){
		System.out.println("name is "+name+" and age is "+age);
	}
	
	public Prototype getClone(){
		return new PrototypeGen(name, age);
	}
}


public class PrototypeClass{
	public static void main(String[] args){
		PrototypeGen pg1 = new PrototypeGen("mark",24);
		PrototypeGen pg2 = (PrototypeGen) pg1.getClone();
		
		pg1.show();
		pg2.show();
	}
	
}