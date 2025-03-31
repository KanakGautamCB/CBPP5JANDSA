#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    bool ans=true;
    for(int i=0;i<s.size();i++){
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
            ans=false;
        }
    }
    if(ans){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
}