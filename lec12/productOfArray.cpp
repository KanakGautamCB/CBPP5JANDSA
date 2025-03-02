#include <iostream>
using namespace std;


int main(){
    int n;cin>>n;
    int arr[n],pref[n],suff[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int m=1;
    for(int i=0;i<n-1;i++){
        m*=arr[i];
        pref[i]=m;
    }
    m=1;
    for(int i=n-1;i>0;i--){
        m*=arr[i];
        suff[i]=m;
    }
    
    for(int i=0;i<n;i++){
        if(i==0){
            cout<<suff[i+1]<<" ";
        }else if(i==n-1){
            cout<<pref[i-1]<<" ";
        }else{
            cout<<pref[i-1]*suff[i+1]<<" ";
        }
    }
    cout<<endl;

}