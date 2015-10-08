#include <iostream>
#include <cstring>

using namespace std;

void call(char *s,int low, int high)
{
    if(low<=high)
    {
        call(s,(low+1),high);
        cout<<s+low<<' '<<endl;
    }

}


int main()
{
    char s[] = "rahul";
    call(s,0,sizeof(s)-2);

    return 0;
}
