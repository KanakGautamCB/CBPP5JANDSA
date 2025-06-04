#include <iostream>
using namespace std;

void heapify(vector<int>&v, int i){

    int mx=v[i];
    if(2*i+1<v.size()){
        if(v[2*i+1]>mx){
            mx=v[2*i+1];
        }
    }
    if(2*i+2<v.size()){
        if(v[2*i+2]>mx){
            mx=v[2*i+2];
        }
    }
    if(mx==v[2*i+1]){
        swap(v[i],v[2*i+1]);
        heapify(v,2*i+1);
    }
    if(mx==v[2*i+2]){
        swap(v[i],v[2*i+2]);
        heapify(v,2*i+2);
    }
}

void push(vector<int>&v, int x){
    v.push_back(x);

    int i=v.size()-1;

    while(i>0){
        heapify(v,(i-1)/2);
        i=(i-1)/2;
    }
}

void pop(vector<int>&v){
    swap(v[0],v[v.size()-1]);
    v.pop_back();
    heapify(v,0);
}

int top(vector<int>&v){
    return v[0];
}

int size(vector<int>&v){
    return v.size();
}


int main(){

    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=n-1;i>=0;i--){
        heapify(v,i);
    }

    push(v,9);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}