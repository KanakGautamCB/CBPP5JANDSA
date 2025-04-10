#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;cin>>n;
    //vector<int>arr={1,2,3,4};
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // v.push_back(7);
    // v.pop_back();
    // v.pop_back();
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    //v.resize(5);
    sort(v.begin(),v.end());
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    cout<<v.back()<<endl;
}