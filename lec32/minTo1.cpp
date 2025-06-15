#include <iostream>
using namespace std;

// Memoization

int solve(int i, vector<int>&dp){
    if(dp[i]!=-1){
        return dp[i];
    }

    int ans=solve(i-1,dp)+1;
    if(i%2==0){
        ans=min(ans,solve(i/2,dp)+1);
    }
    if(i%3==0){
        ans=min(ans,solve(i/3,dp)+1);
    }

    return dp[i]=ans;
}

int main(){
    int n;cin>>n;
    vector<int>dp(n+1,-1);

    dp[1]=0;

    //cout<<solve(n,dp)<<endl;

    //tabulation

    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+1;
        if(i%2==0){
            dp[i]=min(dp[i],dp[i/2]+1);
        }
        if(i%3==0){
            dp[i]=min(dp[i],dp[i/3]+1);
        }
    }

    cout<<dp[n]<<endl;
}