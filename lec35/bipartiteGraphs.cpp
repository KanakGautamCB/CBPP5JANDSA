#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> p(100000);

bool bfs(vector<vector<int>>&edges,int rt, int n, vector<int>&grp){
    grp[rt]=1;
    queue<int>q;
    q.push(rt);
    while(q.size()>0){
        int i=q.front();
        //cout<<i<<endl;
        q.pop();
        for(auto u:edges[i]){
            if(grp[u]==-1){
                grp[u]=(grp[i]==1)?2:1;
                q.push(u);
            }else{
                if(grp[u]==grp[i]){
                    return false;
                }
            }
        }
    }
    return true;
}

int main(){
    int n,m;
    cin>>n>>m;
    
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        p[x].push_back(y);
        p[y].push_back(x);
    }
    //cout<<"check"<<endl;
    vector<int>grp(n,-1);
    bool ans=true;
    for(int i=1;i<=n;i++){
        if(grp[i]==-1){
            cout<<i<<endl;
            ans &= bfs(p,n,i,grp);
            //cout<<ans<<endl;
        }
    }

    if(ans){
        cout<<"yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

}