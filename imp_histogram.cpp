#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int a[] = {2,3,5,2,2};
    int max_area=0;
    int max_localarea=0;
    int n = sizeof(a)/sizeof(int);
    int i=0;
    stack<int> s;
    while(i<n)
    {
        if(s.empty() || a[i]>=a[s.top()])
        {
            s.push(i);
            i++;
        }
        else
        {
            int top = s.top();
            s.pop();
            max_localarea = a[top]*((s.empty()?i:i-s.top()-1));
            max_area = max(max_area, max_localarea);
        }
    }
    while(!s.empty())
    {
        int top = s.top();
        s.pop();
        max_localarea = a[top]*((s.empty()?i:i-s.top()-1));
        max_area = max(max_area, max_localarea);
    }

    cout<<max_area;


    return 0;
}
