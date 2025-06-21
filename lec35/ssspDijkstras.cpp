#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<vector<pair<int,int>>>edges;
vector<int>vis,dis;

int main(){
    int n,m,rt;
    cin>>n>>m>>rt;
    edges.resize(n+1);
    vis.resize(n+1,0);
    dis.resize(n+1,1e9);
    for(int i=0;i<m;i++){
        int x,y,w;
        cin>>x>>y>>w;
        edges[x].push_back({y,w});
        edges[y].push_back({x,w});
    }
    priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>>pq;

    dis[rt]=0;
    pq.push({0,rt});
    while(pq.size()>0){
        auto [d,i] = pq.top();
        pq.pop();
        vis[i]=1;
        for(auto [u,w]:edges[i]){
            if(vis[u]==0 && dis[u]>dis[i]+w){
                dis[u]=dis[i]+w;
                pq.push({dis[u],u});
            }
        }
    }

    for(int i=1;i<=n;i++){
        cout<<dis[i]<<" ";
    }
    cout<<endl;

}