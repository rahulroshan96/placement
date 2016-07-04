// whenever we want to access private or protected member variables of the class
// we can access it by the derived class using inheritance
// or if a non-member function want to use the class variables, it can access is by 
// declaring the non-member function as a friend function

#include <iostream>
using namespace std;

class Animal{
private:
	string name;
	int age;
	void test(){ // even we can access the private method also using friend function
		cout<<"test"<<endl;
	}
public:
	Animal(string name, int age){
		this->name = name;
		this->age = age;
	}
	friend void display(Animal ani); // declare a non-member function as friend function
};

void display(Animal ani){
	cout<<"The name of the Animal is "<<ani.name<<" and the age is "<<ani.age<<endl;
	ani.test();
}

int main(){

	Animal A("mark",20);

	display(A);

	return 0;
}