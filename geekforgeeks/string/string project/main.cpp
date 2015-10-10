#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
using namespace std;

int main() {
	// your code goes here
	string s("wwwwaaadexxxxxx");
	string final;
	stringstream ss;
	unsigned int i=0; int count=0;
	char c=s[0];
	while(i!=s.length())
	{
		if(s[i]==c && i!=s.length()-1) count++;
		else
		{
		    ss.str("");
		    ss << c;
		    final.append(ss.str());
		    ss.str("");
		    ss<<count;
		    final.append(ss.str());

			c = s[i];
			count=1;
		}
		i++;
	}
	cout<<final;
	return 0;
}
