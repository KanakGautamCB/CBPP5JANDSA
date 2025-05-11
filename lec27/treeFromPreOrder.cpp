#include <iostream>
#include <vector>
using namespace std;

class treeNode{
    public:
    int data;
    treeNode *left, *right;
    treeNode(int data){
        this->data=data;
        this->left=nullptr;
        this->right=nullptr;
    }
};

treeNode* construct(vector<int>&sequence, int& i){
    treeNode* x = new treeNode(sequence[i]);

    i++;
    if(sequence[i]!=-1){
        x->left=construct(sequence,i);
    }
    

    i++;
    if(sequence[i]!=-1){
        x->right=construct(sequence,i);
    }

    return x;
    

}

int main(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int i=0;
    treeNode* root = construct(a,i);
    cout<<root->left->data<<" "<<root->right->data<<endl;
}