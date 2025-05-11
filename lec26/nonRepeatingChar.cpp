#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){
    string s;cin>>s;
    vector<int>freq(26,0);
    queue<char>q;
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
        if(freq[s[i]-'a']==1){
            q.push(s[i]);
        }

        while(q.size()>0 && freq[q.front()-'a']>1){
            q.pop();
        }

        if(q.empty()){
            cout<<-1<<" ";
        }else{
            cout<<q.front()<<" ";
        }
    }
    cout<<endl;
}

