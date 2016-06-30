#include <iostream>
#include <string>
using namespace std;
class Animal{
private:
	int legs;
	string sound;
	string food;
public:
	void setLegs(int n)
	{
		legs = n;
	}
	int getLegs()
	{
		return legs;
	}
	void setSound(string s)
	{
		sound = s;
	}
	string getSound()
	{
		return sound;
	}
	void setFood(string s)
	{
		food = s;
	}
	// These are inline functions, which in case of big code leads to Code Bloat
	string getFood()
	{
		return food;
	}
	// Declare here is must
	void show();
};

// Another way to define one function, outside the class, decalration in class is must
void Animal::show(){
	cout<<"Test";
}

int main()
{
	Animal chini;
	chini.setLegs(4);
	chini.setSound("Bow");
	chini.setFood("Chicken");

	cout<<"chini has "<<chini.getLegs()<<" legs\n";
	cout<<"chini speaks "<<chini.getSound()<<endl;
	cout<<"chini eats "<<chini.getFood()<<endl;
	
	chini.show();

	return 0;

}
