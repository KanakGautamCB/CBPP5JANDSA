#include <iostream>
using namespace std;


int main(){
    int n;cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int ans[n+m];
    int i=0,j=0,k=0;

    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            ans[k]=arr1[i];
            i++;
            k++;
        }else if(arr1[i]>arr2[j]){
            ans[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<n){
        ans[k]=arr1[i];
        i++;
        k++;
    }
    while(j<m){
        ans[k]=arr2[j];
        j++;
        k++;
    }
    for(int i=0;i<n+m;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}