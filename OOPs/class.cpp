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
	string getFood()
	{
		return food;
	}
};

int main()
{
	Animal chini;
	chini.setLegs(4);
	chini.setSound("Bow");
	chini.setFood("Chicken");

	cout<<"chini has "<<chini.getLegs()<<" legs\n";
	cout<<"chini speaks "<<chini.getSound()<<endl;
	cout<<"chini eats "<<chini.getFood()<<endl;

	return 0;

}
