#include <iostream>
using namespace std;


int main(){
    int n,t;cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0,r=n-1;
    int ans=0;
    while(l<r){
        if(arr[l]+arr[r]==t){
            ans++;
            l++;
            r--;
        }else if(arr[l]+arr[r]>t){
            r--;
        }else if(arr[l]+arr[r]<t){
            l++;
        }
    }
    cout<<ans<<endl;
}