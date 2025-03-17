#include <iostream>
#include <string>

using namespace std;

int main(){
    // string s;
    // getline(cin,s);
    // cout<<s<<endl;

    string s1="hello";
    string s2="world";
    // s1=s1+s2;
    // cout<<s1<<endl;

    // if(s1>s2){
    //     cout<<"true"<<endl;
    // }else {
    //     cout<<"false"<<endl;
    // }

    // cout<<s1.find('l')<<endl;
    
    // cout<<s1.substr(1,3)<<endl;

    // reverse(s1.begin()+1,s1.end()-1);
    // cout<<s1<<endl;

    // sort(s1.begin(),s1.end());
    // cout<<s1<<endl;

    // sort(s1.begin(),s1.end());
    // reverse(s1.begin(),s1.end());

    // sort(s1.rbegin(),s1.rend());
    // cout<<s1<<endl;

    string str[4] = {"abc","zz","ae","xyz"};
    sort(str, str+4);
    for(int i=0;i<4;i++){
        cout<<str[i]<<" ";
    }


}