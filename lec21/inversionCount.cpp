#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int>&arr,int l,int r){
    int cnt=0;
    vector<int>h(r-l+1);
    int m=(l+r)/2;
    int i=l,j=m+1,k=0;
    while(i<=m && j<=r){
        if(arr[i]>arr[j]){
            h[k]=arr[j];
            cnt+=(m-i+1);
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
    return cnt;
}

int mergeSort(vector<int>&arr,int l,int r){
    if(l>=r){
        return 0;
    }

    int ans=0;
    int m=(l+r)/2;
    ans+=mergeSort(arr,l,m);
    ans+=mergeSort(arr,m+1,r);
    ans+=merge(arr,l,r);
    return ans;
}

int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<mergeSort(arr,0,n-1)<<endl;
}