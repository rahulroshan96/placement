/** correct the program, output is not as requried as wanted **/

#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string s1 = "rahul";
    string s2 = "roshan";
    int i,j;
    int arr[256] = {0};

    for(i=0;i<s2.length();i++)
    {
        arr[s2[i]] = 1;
    }

    j=0;
    for(i=0;i<s1.length();i++)
    {
        if(arr[s1[i]] == 1)
        {

        }
        else
        {
            s1[j] = s1[i];
            j++;
        }

    }
    s1[j] = '\0';


    const char *t = s1.c_str();
    cout<<s1<<' '<<strlen(t);

    return 0;
}
