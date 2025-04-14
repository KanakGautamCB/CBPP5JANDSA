#include <iostream>
using namespace std;

void generator(string s,int i,string& ans){
    //base case
    if(i==s.size()){
        cout<<ans<<endl;
        return;
    }

    //recursive case
    ans+=s[i];
    generator(s,i+1,ans);

    //bactracking
    ans.pop_back();

    generator(s,i+1,ans);

}

int main(){
    string s;cin>>s;
    string ans="";
    generator(s,0,ans);
}