#include <iostream>
using namespace std;

class node{
public:
    int val;
    node* next;
    node* prev;

    node(int val){
        this->val=val;
        this->next=nullptr;
        this->prev=nullptr;
    }

    node(int val,node* prev,node* next){
        this->val=val;
        this->next=next;
        this->prev=prev;
    }

};
int main(){

    node* node4=new node(4);
    node* node3=new node(3);
    node* node2=new node(2);
    node* node1=new node(1);

    node1->prev=nullptr;node1->next=node2;
    node2->prev=node1;node2->next=node3;
    node3->prev=node2;node3->next=node4;
    node4->prev=node3;node4->next=nullptr;

    node* cur=node1;
    while(cur!=nullptr){
        cout<<cur->val<<endl;
        cur=cur->next;
    }

}

