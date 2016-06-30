#include <iostream>
using namespace std;
class Base{
	private:
		int t;
	public:
		Base(){
			cout<<"Base Class Constructor\n";
		}
		static void setT(int n)
		{
			t = n;
		}
		int getT()
		{
			return t;
		}
		~Base(){
			cout<<"Base Class Destructor\n";
		}
};

class Derived : public Base {
private:
	int d;
public:
	Derived(){
		cout<<"Derived Class Constructor\n";
	}
	void setD(int n)
	{
		d = n;
	}
	int getD()
	{
		return d;
	}
	~Derived(){
		cout<<"Derived Class Destructor\n";
	}
};
int main()
{
	Derived de;
	de.setT(100);
	de.setD(200);

	Derived dx;
	dx.setT(500);
	cout<<dx.getT();
	cout<<de.getT();
	/*cout<<"T is "<<de.getT()<<endl;
	cout<<"D is "<<de.getD()<<endl;*/
	return 0;
}
/*
first base class constructor called then derived class contructor is called.
first derived class destructor called then base class destructor is called.
Sandwitch
Base Constructor
Derived Constructor
Derived Destructor
Base Destructor

*/




