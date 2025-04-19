#include <iostream>
using namespace std;

class node{
public:
    int val;
    node* next;

    node(int val){
        this->val=val;
        this->next=nullptr;
    }

    node(int val,node* next){
        this->val=val;
        this->next=next;
    }

};

int main(){

    node* node4=new node(4);
    node* node3=new node(3,node4);
    node* node2=new node(2,node3);
    node* node1=new node(1,node2);

    node* cur =node1;
    while(cur!=nullptr){
        cout<<cur->val<<endl;
        cur=cur->next;
    }

}