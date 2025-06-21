#include <iostream>
using namespace std;
vector<vector<int>>grid,vis;

int dfs(int i, int j, vector<vector<int>>&grid, vector<vector<int>>&vis){
    int n=grid.size(),m=grid[0].size();
    int cnt=1;
    vis[i][j]=1;
    if(i-1>=0 && grid[i-1][j]==1 && vis[i-1][j]==0){
        cnt+=dfs(i-1,j,grid,vis);
    }
    if(i+1<n && grid[i+1][j]==1 && vis[i+1][j]==0){
        cnt+=dfs(i+1,j,grid,vis);
    }
    if(j-1>=0 && grid[i][j-1]==1 && vis[i][j-1]==0){
        cnt+=dfs(i,j-1,grid,vis);
    }
    if(j+1<m && grid[i][j+1]==1 && vis[i][j+1]==0){
        cnt+=dfs(i,j+1,grid,vis);
    }
    return cnt;

}

int main(){
    int n,m;
    cin>>n>>m;
    grid.resize(n);
    vis.resize(n);
    for(int i=0;i<n;i++){
        grid[i].resize(m);
        vis[i].resize(m,0);
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[i][j]==0 && grid[i][j]==1){
                ans=max(ans,dfs(i,j,grid,vis));
            }
        }
    }
    cout<<ans<<endl;
    
}