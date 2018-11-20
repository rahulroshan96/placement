//Given a string, find the length of the longest substring without repeating characters.

#include<iostream>
using namespace std;

int lengthOfLongestSubstring(string s) {
        int array[256]={0};
        int count = 0;
        int start = 0;
        for(int i=0;i<256;i++){
            array[i]=-1;
        }
        for(int i=0;i<s.length();i++){
            if(array[s[i]] == -1){ //character didn't encountered before
                array[s[i]]=i;
                count = max(count,(i-start)+1);
            }else{
                if(array[s[i]]>=start){
                start = array[s[i]]+1;
                count = max(count,(i-start)+1);
                array[s[i]]=i;
                }else{
                    count = max(count,(i-start)+1);
                    array[s[i]]=i;
                }
            }
        }
        return count;
    }

int main(){
    cout<<lengthOfLongestSubstring("rahulr");
    return 0;
}
