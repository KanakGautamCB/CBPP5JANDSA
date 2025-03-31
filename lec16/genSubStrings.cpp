#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            cout<<s.substr(i,j-i+1)<<" ";
        }
        cout<<endl;
    }
    
}