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

void quickSort(vector<int>&arr, int l, int r){
    if(l>=r){
        return;
    }
    int mid = partition(arr,l,r);
    quickSort(arr,l,mid-1);
    quickSort(arr,mid+1,r);
}

int main(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    quickSort(v,0,n-1);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}