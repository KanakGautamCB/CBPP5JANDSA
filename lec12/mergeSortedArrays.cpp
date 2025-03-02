#include <iostream>
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    int arr1[n+m],arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int i=n-1,j=m-1,k=n+m-1;
    while(i>=0 && j>=0){
        if(arr2[j]>arr1[i]){
            arr1[k]=arr2[j];
            j--;
            k--;
        }else{
            arr1[k]=arr1[i];
            i--;
            k--;
        }
    }
    while(j>=0){
        arr1[k]=arr2[j];
        j--;
        k--;
    }
    for(int i=0;i<n+m;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
}