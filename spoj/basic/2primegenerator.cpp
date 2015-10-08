/** Key point, check the number division upto sqrt of that number, it will reduce lots of time **/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here

	int t,a,b,flag,j,i;
	cin>>t;
	while(t!=0)
	{
		cin>>a>>b;
		for(i=a;i<=b;i++)
		{
			flag = 0;
			for(j=2;j<=sqrt(i);j++) // code to test, if i is a prime number or not
			{
				if(i%j == 0) {
					flag =1;
					break;
				}
			}
			if(flag == 0 && i != 1) cout<<i<<endl;
			flag = 0;
		}
		t--;
		cout<<endl;
	}


	return 0;
}
