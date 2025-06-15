#include <iostream>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;

    vector<vector<int>>dp(s1.size()+1,vector<int>(s2.size()+1,1e9));

    dp[0][0]=0;


    for(int i=1;i<=s1.size();i++){
        for(int j=1;j<=s2.size();j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }else{
                dp[i][j] = min(dp[i-1][j] +1 , dp[i][j-1]+1);
                dp[i][j] = min(dp[i][j], dp[i-1][j-1]+1);
            }
        }
    }
    cout<<dp[s1.size()][s2.size()]<<endl;

}