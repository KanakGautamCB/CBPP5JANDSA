#include <iostream>
using namespace std;


void bfs(int rt, int n, vector<vector<int>>& edges){
    vector<int>vis(n,0);
    queue<int>q;
    q.push(rt);
    vis[rt]=1;

    while(q.size()>0){
        int i=q.front();
        q.pop();

        for(auto u:edges[i]){
            if(vis[u]==0){
                vis[u]=1;
                q.push(u);
            }
        }
    }
}