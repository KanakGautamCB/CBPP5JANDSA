#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>&arr,int l,int r){
    vector<int>h(r-l+1);
    int m=(l+r)/2;
    int i=l,j=m+1,k=0;
    while(i<=m && j<=r){
        if(arr[i]>arr[j]){
            h[k]=arr[j];
            k++;
            j++;
        }else{
            h[k]=arr[i];
            i++;
            k++;
        }
    }
    while(i<=m){
        h[k]=arr[i];
        i++;
        k++;
    }
    while(j<=r){
        h[k]=arr[j];
        j++;
        k++;
    }
    for(int i=l;i<=r;i++){
        arr[i]=h[i-l];
    }
}

void mergeSort(vector<int>&arr,int l,int r){
    if(l>=r){
        return;
    }

    int m=(l+r)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,r);
}

int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}