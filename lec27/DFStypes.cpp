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

void preOrderDfs(treeNode* x){
    cout<<x->data<<endl;

    if(x->left){
        preOrderDfs(x->left);
    }

    if(x->right){
        preOrderDfs(x->right);
    }
    
}

void inOrderDfs(treeNode* x){
    

    if(x->left){
        inOrderDfs(x->left);
    }
    cout<<x->data<<endl;
    if(x->right){
        inOrderDfs(x->right);
    }
    
}

void postOrderDfs(treeNode* x){
    

    if(x->left){
        postOrderDfs(x->left);
    }
    
    if(x->right){
        postOrderDfs(x->right);
    }
    cout<<x->data<<endl;
    
}



int main(){
    treeNode* n1= new treeNode(1);
    treeNode* n2= new treeNode(2);
    treeNode* n3= new treeNode(3);
    treeNode* n4= new treeNode(4);
    treeNode* n5= new treeNode(5);

    n1->left=n2;
    n1->right=n3;
    n2->left=n4;
    n3->right=n5;

    postOrderDfs(n1);
}


