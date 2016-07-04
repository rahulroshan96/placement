// in case of protected inheritance all the protected and public members of the base class would become the protected members in the derived class
#include <iostream>
using namespace std;

class Animal{
protected:
	string name; // this remains protected in derived class if inherited as protected
public:
	void setName(string name){ // this setName becomes protected in derived class is inherited as protected
		this->name = name;
	}
};

class Dog:protected Animal{ 
public:
	void show(){
		cout<<"The name of the animal is "<<name<<endl;
	}
	void setDogName(string name){ // we can access setName in this way, but not direct like dg.setName()
		setName(name);
	}
};

int main(){

	Dog dg;
	//dg.setName("Mark"); // this will give error coz setName is protected in dog class, and is unaccessable
	dg.setDogName("Mark");
	dg.show();

	return 0;
}