#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int k =1;
    int count=0;
    int arr[10] = {1,2,3,4,5};
    vector<int> myv(arr,arr+5);

    sort(myv.begin(),myv.end());

        vector<int>::iterator it;
        for(int i=0;i<myv.size()-1;i++)
        {
            int t = myv[i]+k;
            it = find(myv.begin()+i,myv.end(),t);

            if(*it != 0 )
            {
            count++;
            cout<<t<<' '<<endl;
            }

        }
        cout<<count;

    return 0;
}

