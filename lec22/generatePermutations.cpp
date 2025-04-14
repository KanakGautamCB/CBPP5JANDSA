#include <iostream>
using namespace std;

void generator (string& s, int i){
    //cout<<s<<" "<<i<<endl;
    if(i==s.size()-1){
        cout<<s<<endl;
    }

    for(int j=i;j<s.size();j++){

        if(s[i]!=s[j] || i==j){
            swap(s[i],s[j]);
            generator(s,i+1);
            swap(s[i],s[j]);
        }
    }
}

int main(){
    string s;cin>>s;
    generator(s,0);
}