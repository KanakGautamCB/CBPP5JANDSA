#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>>dp(n+1,vector<int>(m+1)), nums(n+1,vector<int>(m+1));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>nums[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){

            if(i-1>0 && j-1>0){
                dp[i][j]=min(dp[i-1][j],dp[i][j-1])+nums[i][j];
            }
            else if(j-1>0 && i-1<=0){
                dp[i][j]=dp[i][j-1]+nums[i][j];
            }
            else if(i-1>0 && j-1<=0){
                dp[i][j]=dp[i-1][j]+nums[i][j];
            }
            else if(i-1<=0 && j-1<=0){
                dp[i][j]=nums[i][j];
            }
        }
    }
    cout<<dp[n][m]<<endl;



}
