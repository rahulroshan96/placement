/* find the amicable number between 1 and 1000 (both inclusive) */

#include <iostream>
#include <cstring>

using namespace std;


int find_amicable(int n)
{
    int i,j;

    int sum = 0;
        for(j=1;j<=n/2;j++)
        {
            if(n%j == 0)
                {
                    sum = sum+j;
                }
        }
        return sum;

}

void ok(int low, int high)
{
    int i;
    for(i=low;i<=high;i++)
    {

        if(i == find_amicable(find_amicable(i)))
        cout<<i<<' ';
    }
}

int main()
{
    int low=1,high=1000;
    ok(low,high);
    return 0;
}
