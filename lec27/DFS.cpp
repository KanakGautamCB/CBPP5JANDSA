#include <iostream>
#include <vector>
using namespace std;

class treeNode{
    int data;
    vector<treeNode*> childNodes;
    treeNode(int data){
        this->data=data;
    }

    void addChild(treeNode* child){
        childNodes.push_back(child);
    }
};

void dfs(int i, vector<vector<int>>&edges, int pr){
    cout<<i<<endl;
    for(int j=0;j<edges[i].size();j++){
        int k=edges[i][j];
        if(k!=pr){
            dfs(k,edges,i);
        }
    }
}

void bfs(int root, vector<vector<int>>&edges, int n){
    queue<int>q;
    vector<int>vis(n+1,0);
    q.push(root);
    while(!q.empty()){
        int i = q.front();
        q.pop();
        vis[i]=1;
        cout<<i<<" ";
        for(int j=0;j<edges[i].size();j++){
            int k=edges[i][j];
            if(vis[k]==0){
                q.push(k);
            }

        }
    }
}

int main(){

    int n;cin>>n;
    vector<vector<int>>edges(n+1);
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }

    //dfs(1,edges,-1);
    bfs(1,edges,6);

}