#include <iostream>
#include <string>
using namespace std;

string get_zig_zag(string s, int n){
    string temp;
        if(n == 1){
            return s;
        }

    for(int i=0;i<n;i++){
        temp+=s[i];
        int j = i;
        if(i==0 || i == (n-1)){
        while(j<s.length()){
                int next = j+(n-1)+(n-1);
                if(next<s.length()){
                    temp+=s[next];
                    // cout<<s[next];
                    j=next;
                }else{
                    break;
                }

        }}else{

                bool flag = false; // false->going down, true->going up
                while(j<s.length()){
                    if(!flag){ // going down
                    int next = j+(((n-1)-i)+((n-1)-i-1))+1;
                    if(next<s.length()){
                        temp+=s[next];
                        // cout<<s[next];
                        j=next;
                        flag = true;
                        }else{
                            break;
                        }
                    }else{ // going up
                        int next = j+i+(i-1)+1; // going up
                        if(next<s.length()){
                            temp+=s[next];
                            j=next;
                            flag=false;
                        }else{
                            break;
                        }
                    }
                }

            }
    }
    return temp;
}


int main(){
    string s = "RAHULROSHANXYZMNOP";
    // "ROYARSXZPHLHNMOUAN"
    // "ROYARSXZPHLHNMOUAN"
    cout<<get_zig_zag(s, 4)<<endl;
    return 0;
}
