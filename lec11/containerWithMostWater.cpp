#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0,r=n-1;
    int ans=0;
    while(l<r){
        int width=r-l;
        int height=min(arr[l],arr[r]);
        int ar=width*height;
        ans=max(ans,ar);
        if(arr[r]==arr[l]){
            l++;
            r--;
        }else if(arr[r]>arr[l]){
            l++;
        }else if(arr[r]<arr[l]){
            r--;
        }
    }
    cout<<ans<<endl;
}