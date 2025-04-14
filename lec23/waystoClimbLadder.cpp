#include <iostream>
using namespace std;

int calWays(int i,int k, int t){
    if(i==t){
        return 1;
    }
    int ans=0;
    for(int j=1;j<=k;j++){
        if(i+j<=t){
            ans+=calWays(i+j,k,t);
        }
    }
    cout<<i<<" "<<t<<" "<<ans<<endl;
    return ans;
}

int main(){

    int n,k;
    cin>>n>>k;
    cout<<calWays(0,k,n)<<endl;

}