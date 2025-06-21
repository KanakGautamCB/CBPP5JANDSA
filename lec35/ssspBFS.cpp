#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>>edges;
vector<int>vis,dis;

int main(){

    int n,m,rt;
    cin>>n>>m>>rt;
    edges.resize(n+1);
    vis.resize(n+1,0);
    dis.resize(n+1,-1);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }

    queue<int>q;
    q.push(rt);
    vis[rt]=1;
    dis[rt]=0;

    while(q.size()>0){
        int i=q.front();
        //cout<<i<<endl;
        q.pop();
        for(auto u:edges[i]){
            if(vis[u]==0){
                vis[u]=1;
                dis[u]=dis[i]+1;
                q.push(u);
            }
        }
    }

    for(int i=1;i<=n;i++){
        cout<<dis[i]<<" ";
    }
    cout<<endl;
}