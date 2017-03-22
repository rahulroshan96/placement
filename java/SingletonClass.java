class Singleton
{
    private static Singleton obj;
    
    int x=0;
    // private constructor to force use of
    // getInstance() to create Singleton object
    private Singleton() {}
    void set(int n){
    	x = n;
    }
    void get(){
    	System.out.println(x);
    }
    // synchronized to make getInstance method thread safe
    public synchronized static Singleton getInstance()
    {
        if (obj==null)
            obj = new Singleton();
        return obj;
    }
}

public class SingletonClass {
	public static void main(String[] arggs){
		Singleton s1 = Singleton.getInstance();
		Singleton s2 = Singleton.getInstance();
		s1.set(100);
		System.out.println("The value of x in instance s1 and s2 are ");
		s1.get(); s2.get();
	}
}
