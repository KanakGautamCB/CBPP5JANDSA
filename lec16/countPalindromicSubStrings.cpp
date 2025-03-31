#include <iostream>
using namespace std;

int main(){
    string s;cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        int l=i,r=i;
        while(l>=0 && r<s.size() && s[l]==s[r]){
            cnt++;
            l--;
            r++;
        }
    }
    for(int i=0;i<s.size()-1;i++){
        int l=i,r=i+1;
        while(l>=0 && r<s.size() && s[l]==s[r]){
            cnt++;
            l--;
            r++;
        }
    }
    cout<<cnt<<endl;
}