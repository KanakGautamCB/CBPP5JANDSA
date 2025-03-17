#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l[n],r[n];
    int mx=0;
    for(int i=0;i<n;i++){
        if(i==0){
            l[i]=arr[i];
        }else{
            l[i]=max(arr[i],l[i-1]);
        }
    }
    for(int i=n-1;i>=0;i--){
        if(i==n-1){
            r[i]=arr[n-1];
        }else{
            r[i]=max(arr[i],r[i+1]);
        }
    }
    int ans=0;
    for(int i=1;i<n-1;i++){
        ans+=max(0,min(l[i-1],r[i+1])-arr[i]);
    }
    cout<<ans<<endl;
}