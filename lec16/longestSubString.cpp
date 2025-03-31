#include <iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cnt=0,ans=0;
    string str="",ansStr="";
    for(int i=0;i<s.size();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u'){
            cnt++;
            str+=s[i];
        }else{
            cnt=0;
            str="";
        }

        if(cnt>ans){
            ans=cnt;
            ansStr=str;
        }else if(cnt==ans){
            ansStr=max(str,ansStr);
        }
    }
    cout<<ansStr<<endl;
}