#include <iostream>
#include <vector>
#include <stack>
#include <sstream>
using namespace std;


string ONP(string s)
{
	stack<string> operand,operatorr;
	for(int i=0;i<s.length();i++)
	{
		if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
		{
			stringstream ss;
			ss << s[i];
			string x = ss.str();
			operatorr.push(x);

		}
		else if(s[i] == ')')
		{
			string b(operand.top());
			operand.pop();
			string a(operand.top());
			operand.pop();
			a.append(b);
			string c(operatorr.top());
			a.append(c);
			operatorr.pop();
			operand.pop();
			operand.push(a);
		}
		else 
		{
			stringstream ss;
			ss << s[i];
			string x = ss.str();
			operand.push(x);
		}
	}
	return operand.top();
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<ONP(s);
	}
	return 0;
}

// Chef Solution
/*
#include <iostream>
#include <stack>
#include <cctype>
#include <cstring>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    char str[1000];
    stack <char> s;
    while (t--)
    {
        cin>>str;
        int len = strlen (str);
 
        for(int i=0;i<len;i++ )
        {
            if(isalpha(str[i]))
                cout << str[i];
            else if(str[i] == ')' )
            {
                cout << s.top ();
                s.pop ();
            }
 
            else if (str[i] != '(' )
                s.push (str[i]);
        }
 
        cout << endl;
    }
 
    return 0;
} 
Comments 

*/
