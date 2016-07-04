// in case of protected, the protected variable we can access by the derived class also.
//http://imgur.com/T3Z5NSZ access specifiers details
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

class Dog:public Animal{
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