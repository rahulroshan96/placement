#include <iostream>
#include <stack>
using namespace std;

void B(stack<int> &s, int n){
	if(s.empty() || n <= s.top()){
		s.push(n);
		return;
	}
	int m = s.top();
	s.pop();
	B(s,n);
	s.push(m);
}

void A(stack<int> &s){
	if(!s.empty()){
		int x = s.top();
		s.pop();
		A(s);
		B(s,x);
	}
}

int main(){
	stack<int> s;
	s.push(3);
	s.push(15);
	s.push(1);
	s.push(0);

	A(s);
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}