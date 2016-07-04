// in case of private inheritance, all the protected and public members of the base class becomes private members of the derived class
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

class Dog:private Animal{ 
public:
	void show(){ 
		cout<<"The name of the animal is "<<name<<endl;
	}
	void setDogName(string name){ // the reason we can access this method from main() is that this method is avaialble for public, but the 
		//setName method is only visible to Dog class only as protected, so we can not access setName from main(), but we can access setName from Dog class
		setName(name);
	}
};

int main(){

	Dog dg;
	//dg.setName("Mark"); // this will give error coz setName is only visible to Dog class only, not to main() function
	dg.setDogName("Mark");
	dg.show();

	return 0;
}