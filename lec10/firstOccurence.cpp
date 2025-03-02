#include <iostream>
using namespace std;


int main(){
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0,e=n-1;
    int ans=-1;

    while(s<=e){
        int m=(s+e)/2;
        if(t==arr[m]){
            ans=m;
            e=m-1;
        }else if(t<arr[m]){
            e=m-1;
        }else if(t>arr[m]){
            s=m+1;
        }
    }
    cout<<ans<<endl;
}