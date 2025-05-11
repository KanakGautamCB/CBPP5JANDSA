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

void postOrderDfs(treeNode* x){
    

    if(x->left){
        postOrderDfs(x->left);
    }
    
    if(x->right){
        postOrderDfs(x->right);
    }
    treeNode* temp = x->left;
    x->left=x->right;
    x->right=temp;
    
}