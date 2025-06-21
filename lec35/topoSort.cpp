#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>>edges;
vector<int>indegree;


int main(){
    int n,m;
    cin>>n>>m;
    edges.resize(n+1);
    indegree.resize(n+1,0);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        edges[x].push_back(y);
        indegree[y]++;
    }

    queue<int>q;
    for(int i=1;i<=n;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }

    while(q.size()>0){
        int i=q.front();
        q.pop();
        cout<<i<<" ";
        for(auto u:edges[i]){
            indegree[u]--;
            if(indegree[u]==0){
                q.push(u);
            }
        }
    }
}