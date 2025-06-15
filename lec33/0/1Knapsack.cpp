#include <iostream>
using namespace std;

int main(){
    int n,s;
    cin>>n>>s;

    vector<int>p(n),w(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=0;i<n;i++){
        cin>>w[i];
    }

    vector<int>dp(s+1,-1);
    dp[0]=0;

    for(int i=0;i<n;i++){
        for(int j=s;j>=0;j--){
            if(w[i]<=j &&  dp[j-w[i]]!=-1)
            dp[j]=max(dp[j],dp[j-w[i]]+p[i]);
        }
    }
    int ans=0;
    for(int i=0;i<=s;i++){
        ans=max(ans,dp[i]);
    }
    cout<<ans<<endl;

}

