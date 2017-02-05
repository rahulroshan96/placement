#include <iostream>
#include <stdio.h>
using namespace std;

class Animal{
	public:
	int *age;
	Animal(int n){
		age = new int;
		*age = n;
	}
	void getData();

	Animal(const Animal &a){
		age = new int(*a.age);
	}

	void changeValue(int n){
		*(this->age) = n; 
	}
};

void Animal :: getData(){
	cout<<"The value of age is "<<*age<<endl;
}

int main(){

	Animal a(100);
	a.getData();

	Animal b(a);
	// b = a; if b created like this, change in a's dynamic variables will lead to change in b's dynamic variables
	
	a.changeValue(200); // change the age for object a 
	a.getData(); // output: 200
	b.getData(); // output: 100


	return 0;
}
