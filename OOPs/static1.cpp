// Static variable is shared among all the objects
// static method is shared among all the objects and can access only static variables in it.
// staticFunction can not user x variable in it, meanwhile it can create a non-static variable in it, e.g. l=0;
#include <iostream>

using namespace std;

class Animal{
private:
	static int total_animal;
public:
	int x;
	Animal(){
		total_animal++;
	}

	void show(){
		cout<<"Total number of animals generated "<<total_animal<<endl;
	}

	static void staticFunction(){
		int l=2;
		cout<<"Total number of animals generated "<<total_animal<<endl;
		cout<<l<<endl;
	}
};

int Animal::total_animal=0; // don't forget to user int, means the variable data type is int

int main(){
	Animal ani;
	Animal bka;
	bka.show();
	Animal tka;
	Animal::staticFunction(); // this is the proper way to call static member function

	return 0;
}