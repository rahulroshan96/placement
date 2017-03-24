#include <iostream>
#include <string>
using namespace std;

void toi(int n, string source, string des, string aux){
	if(n==1){
		cout<<"Move disk 1 from peg "<<source<<" to "<<des<<endl;
		return;
	}

	toi(n-1,source,aux,des);
	cout<<"Move disk from peg "<<source<<" to peg "<<des<<endl;
	toi(n-1,aux,des,source);
}


int main(){
	int n;
	cout<<"Enter value of n "<<endl;
	cin>>n;
	string source="source",aux="auxillary",des="destination";
	toi(n,source,des, aux);
	return 0;
}