#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>&arr, int l, int r){
    int p=r;
    int i=l;
    int k=l-1;
    while(i<p){
        if(arr[i]>=arr[p]){
            i++;
        }else{
            k++;
            swap(arr[k],arr[i]);
            i++;
        }
    }
    swap(arr[p],arr[k+1]);
    return k+1;
}

int quickSelect(vector<int>&arr, int l, int r, int k){
    if(l==r){
        return l;
    }
    if(l>r){
        return -1;
    }
    int mid = partition(arr,l,r);
    if(mid==k){
        return arr[mid];
    }else if(mid<k){
        return quickSelect(arr,mid+1,r,k);
    }else{
        return quickSelect(arr,l,mid-1,k);
    }
   
    
}

int main(){
    int n,k;cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<quickSelect(v,0,n-1,k-1)<<endl;
}