#include <iostream>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;

}