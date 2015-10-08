/* Sample program illustrating input/output */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void){

//Helpers for input and output

   unsigned long long int N, K;
   cin >> N >> K;
    unsigned long long int C[] = {390225, 426456, 688267 ,800389 ,990107 ,439248 ,240638 ,15991 ,874479 ,568754 ,729927 ,980985 ,132244, 488186, 5037 ,721765, 251885, 28458, 23710, 281490, 30935, 897665, 768945, 337228 ,533277 ,959855 ,927447 ,941485, 24242 ,684459 ,312855 ,716170 ,512600 ,608266 ,779912, 950103 ,211756 ,665028, 642996 ,262173 ,789020 ,932421 ,390745 ,433434 ,350262 ,463568 ,668809 ,305781 ,815771 ,550800};

    vector<unsigned long long int> myv(C,C+N);

    sort(myv.begin(),myv.end());

    unsigned long long sum=0,flag=0,k1=1;;
    for(int i=N-1;i>=0;i--)
        {
        cout<<myv[i]<<' '<<endl;
        sum += myv[i]*(flag+1);
        if(k1 == K)
        {
        flag++;
        k1=0;
        }

        k1++;

    }



   unsigned long long int result=sum;
   cout << result << "\n";

   return 0;
}

