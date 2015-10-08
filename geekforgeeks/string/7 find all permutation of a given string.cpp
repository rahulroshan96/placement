#include <iostream>
#include <cstring>

using namespace std;

void swap(char *a, char *b)
{
    char c;
    c = *a;
    *a = *b;
    *b = c;
}

void permute(char *s, int low, int high)
{
    int i;
    if(low==high)
    cout<<s<<' '<<endl;
    else
    {
        for(i=low;i<=high;i++)
        {
            swap((s+low),(s+i));
            permute(s,(low+1),high);
            swap((s+low),(s+i));
        }
    }
}

int main()
{
    char s[] = "ABC";
    permute(s,0,sizeof(s)-2);
    return 0;


}
