#include <iostream>

using namespace std;


int main()
{
	int imput;

	cin >> imput; //reads the first number

	while(imput != 42) //Print out number that we just checked is NOT 42
	{
		cout << imput << endl;
		cin >> imput; // next time I can take input only when my current input is not 42
	}


	return 0;
}
