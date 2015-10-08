#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main()
{
    priority_queue< pair<int,int> > myq;
    int C;
    cout<<"enter the number of cities"<<endl;
    cin>>C;
    vector<int> cities;
    cout<<"enter the population"<<endl;
    int x;
    for(int i=0;i<C;++i)
    {

        cin>>x;
        cities.push_back(x);


    }


    int k =0;
    cout<<"enter the number of hospitals"<<endl;
    cin>>k;
    int j =1;



    pair<int, int> max_pop=make_pair(0,0);

    for(int i = 0;i<C;++i)
        {

            myq.push(make_pair(cities[i],i));
        }

    while(j!=k+1)
    {

    max_pop = myq.top();

    myq.pop();

    int check_i = max_pop.second;

    j++;
    int t = cities[check_i]/j;
    myq.push(make_pair(t,check_i));

    }

    max_pop = myq.top();


    while(!myq.empty())
    {
        cout<<endl;
        cout<<myq.top().first<<" ";
        myq.pop();
    }


    return 0;
}
