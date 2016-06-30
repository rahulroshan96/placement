#include<iostream>
using namespace std;

class Abc
{
 public:
 Abc()
 {
  cout << "constructor\n";
 }
 ~Abc()
 {
   cout << "destructor\n";
 }
};

int main()
{
 static Abc obj1; // In this case the lifetime of the object would be till the end of the program
 
 //Abc obj2 ;// In this case the lifetime of the object would be before the cout<<"END \n" statement

 cout << "END\n";
}