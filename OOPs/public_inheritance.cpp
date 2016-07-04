// we are using public inheritance here, that means the public members of base would be public to derived
// protected members of base would be proteced to derived class
// private members of base wouldn't be visible to derived class

#include <iostream>
using namespace std;

class Animal{
protected:
	string name;
public:
	void setName(string name){
		this->name = name;
	}
};

class Dog:public Animal{ // if this class is inherited by some "Doberman" class then the protected members wouldn't be visible to the "Doberman" class
public:

	void show(){
		cout<<"The name of the animal is "<<name<<endl;
	}
};

int main(){

	Dog dg;
	dg.setName("Mark");
	dg.show();

	return 0;
}