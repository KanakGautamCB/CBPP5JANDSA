#include <iostream>
using namespace std;

class node{
public:
    int val;
    node* next;

    node(){

    }

    node(int val){
        this->val=val;
        this->next=nullptr;
    }

    node(int val,node* next){
        this->val=val;
        this->next=next;
    }

};


int searchNode(node* head, int t){
    node* cur=head;
    int i=1;
    while(cur!=nullptr){
        if(cur->val==t){
            return i;
        }
        i++;
        cur=cur->next;
    }
    return -1;
}