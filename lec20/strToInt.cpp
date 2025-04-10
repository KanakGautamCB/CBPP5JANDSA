#include <iostream>
using namespace std;

int generator(string s, int i){
    if(i==-1){
        return 0;
    }
    //int s1=generator(s,i-1);
    int ans=s[i]-'0' + generator(s,i-1)*10;
    return ans;
}

int main(){
    string s;
    cin>>s;
    cout<<generator(s,s.size()-1);
}