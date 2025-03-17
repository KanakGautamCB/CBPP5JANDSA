#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int f[n];
    for(int i=0;i<n;i++){
        if(i==0)f[i]=1;
        else f[i]=0;
    }
    int sum=0;
    int ans=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        int m=(sum%n);
        ans+=f[m];
        f[m]++;
    }
    cout<<ans<<endl;

}