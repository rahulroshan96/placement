/*
// CASE1: This is the normal case, and working fine in this case

#include <iostream>
#include <string>
using namespace std;
class Animal{
private:
	string name;
	int age;
public:
	Animal(string n, int a){
		this->name = n; // static memory allocation for name
		this->age = a;
	}
	void changeValues(string n, int a){
		this->name =n; // in case of static assignment
		this->age = a;
	}
	void animalDetail(){
		cout<<"Animal name is "<<name<<" and age is "<<age<<endl; // name in case of static
	}
};

int main()
{
	Animal richie("richie",5);
	richie.animalDetail();

	Animal duplicaterichie = richie; // richie is source object and duplicaterichie is destination object
	duplicaterichie.animalDetail();

	richie.changeValues("mark",2); // here we changed the values of source object not destination object
	richie.animalDetail();
	duplicaterichie.animalDetail();

	return 0;
}*/


/*
// CASE2: This is the problem case, the problem arises when the name variable's memory is dynamic allocated
// and then we change the value of the source object. In this way the values of destination object 
// is also changed.

#include <iostream>
#include <string>
using namespace std;
class Animal{
private:
	string *name;
	int age;
public:
	Animal(string n, int a){
		//this->name = n; // static memory allocation for name
		this->name = new string(n); // dynamic memory allocation for name, new perform dynamic mem. alloc.
		this->age = a;
	}
	void changeValues(string n, int a){
		//this->name =n; // in case of static assignment
		*(this->name) = n; // in case of dynamic assignment
		this->age = a;
	}
	void animalDetail(){
		cout<<"Animal name is "<<*name<<" and age is "<<age<<endl; // name in case of static
	}
};

int main()
{
	Animal richie("richie",5);
	richie.animalDetail();
	Animal duplicaterichie = richie; // richie is source object and duplicaterichie is destination object
	richie.changeValues("mark",2); // here we changed the values of source object not destination object
	richie.animalDetail();
	duplicaterichie.animalDetail();
	return 0;
}*/


// CASE3: This is the solution copy constructor case.

// In the solution case we create one constructor that takes the Animal reference as parameter
// and then create a new memory for the object and then assign the values 
#include <iostream>
#include <string>
using namespace std;
class Animal{
private:
	string *name;
	int age;
public:
	Animal(string n, int a){
		//this->name = n; // static memory allocation for name
		this->name = new string(n); // dynamic memory allocation for name, new perform dynamic mem. alloc.
		this->age = a;
	}
	Animal(const Animal &obj){
		cout<<"Copy constructor is called\n";
		name = new string(*obj.name);
		age = obj.age;
	}
	void changeValues(string n, int a){
		//this->name =n; // in case of static assignment
		*(this->name) = n; // in case of dynamic assignment
		this->age = a;
	}
	void animalDetail(){
		cout<<"Animal name is "<<*name<<" and age is "<<age<<endl; // name in case of static
	}
};

int main()
{
	Animal richie("richie",5);
	richie.animalDetail();

	Animal duplicaterichie = richie; // richie is source object and duplicaterichie is destination object
	duplicaterichie.animalDetail();

	richie.changeValues("mark",2); // here we changed the values of source object not destination object
	richie.animalDetail();
	duplicaterichie.animalDetail();

	return 0;
}


