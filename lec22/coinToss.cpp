#include <iostream>
using namespace std;

void generator(int n,int i,string& ans){
    //base case
    if(i==n+1){
        cout<<ans<<endl;
        return;
    }

    //recursive case
    if((ans.size()==0) || (ans.size()>0 && ans.back()!='H')){
        ans+='H';
        generator(n,i+1,ans);
        ans.pop_back();
    }
    ans+='T';
    generator(n,i+1,ans);
    ans.pop_back();
}


int main(){
    int n;cin>>n;
    string ans="";
    generator(n,1,ans);
}