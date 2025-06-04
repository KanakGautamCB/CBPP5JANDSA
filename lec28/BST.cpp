#include <iostream>
using namespace std;

class node{
public:
    int val;
    node *left, *right;

    node(int v){
        val=v;
        left=nullptr;
        right=nullptr;
    }
};

bool search(node* root,int target){
    if(root==nullptr){
        return false;
    }

    if(root->val==target){
        return true;
    }

    if( root->val>target &&  search(root->left,target)){
        return true;
    } else if(root->val<target && search( root->right,target)){
        return true;
    }

    return false;
}

node* insert(node* root,int val){
    if(root==nullptr){
        node* x = new node(val);
        return x;
    }

    if( root->val>val){
        root->left=insert(root->left,val);
    } else if(root->val<val){
        root->right=insert(root->right,val);
    }

    return root;
}

node* deletion(node* root, int target){
    if(root->val==target){
        int cnt=0;
        if(root->left)cnt++;
        if(root->right)cnt++;

        if(cnt==0){
            return nullptr;
        }else if(cnt==1){
            if(root->left){
                return root->left;
            }
            else{
                return root->right;
            }
        }else{
            // node* z=root->left;
            // while(z->right){
            //     z=z->right;
            // }
            // root->val=z->val;
            // root->left=deletion(root->left,z->val);

            node* z=root->right;
            while(z->left){
                z=z->left;
            }
            root->val=z->val;
            root->right=deletion(root->right,z->val);
        }
    }else if(root->val>target){
        root->left=deletion(root->left,target);
    }else{
        root->right=deletion(root->right,target);
    }
}

int main(){

}
