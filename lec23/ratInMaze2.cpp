#include <iostream>
#include <vector>
using namespace std;

int check(vector<vector<char>>v,int i, int j,int n,int m){
    if(i==n && j==m){
        return 1;
    }

    int ans=0;

    if(i+1<=n && v[i+1][j]!='X'){
        ans+=check(v,i+1,j,n,m);
    }

    if(j+1<=m && v[i][j+1]!='X'){
        ans+=check(v,i,j+1,n,m);
    }

    return ans;
}

int main(){
    int n,m;cin>>n>>m;
    vector<vector<char>>v(n+1,vector<char>(m+1));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>v[i][j];
        }
    }

    cout<<check(v,1,1,n,m)<<endl;
}