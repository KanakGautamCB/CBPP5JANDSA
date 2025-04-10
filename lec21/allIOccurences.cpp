#include <iostream>
#include <vector>
using namespace std;

void find(vector<int> arr, int t, int i, bool& found){
    if(i==arr.size()){
        return;
    }

    if(arr[i]==t){
        found=true;
        cout<<i<<" ";
    }

    find(arr,t,i+1,found);
}



int main(){
    int n,t;cin>>n>>t;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bool found = false;
    find(v,t,0,found);
    if(found==false){
        cout<<-1<<endl;
    }
}