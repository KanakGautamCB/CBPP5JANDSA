#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int x;
    int ans=0;
    for(int i=1;i<=n;i=i+1){
        cin>>x;
        ans=ans^x;
    }
    cout<<ans<<endl;
}