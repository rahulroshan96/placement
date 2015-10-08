#include<iostream>
#include<algorithm>
#include<set>
#include<stack>
#include<list>
#include<vector>

using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout<<"size of my stack "<<s.size()<<endl;

    while(!s.empty())
    {
        cout<<"top of the stack "<<s.top()<<endl;
        s.pop();

    }

    return 0;
}
