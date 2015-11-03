// Example program
#include <iostream>
#include <string>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubble(int *a,int n)
{
    for(int i=n-1;i>=1;i--)
    for(int j=0;j<i;j++)
    {
        int flag = 0;
        if(a[j]>a[j+1])
        {
            swap(a[j],a[j+1]);
            flag = 1;
        }
        if(!flag) break;
    }
}
int main()
{
  int a[8] = {8,7,6,5,4,3,2,1};
  bubble(a,8);
  for(int i=0;i<8;i++)
  cout<<a[i]<<" ";
}
