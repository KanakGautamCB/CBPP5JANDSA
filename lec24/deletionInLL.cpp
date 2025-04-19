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

class list{
public:
    node* head;
    node* tail;

    list(node* head){
        this->head=head;
        this->tail=head;
    }

    void deleteAtHead(){
        node* cur=head;
        head=cur->next;
        delete cur;
    }

    void deleteInBetween(int pos){
        node* cur=head;
        pos-=1;
        while(--pos){
            cur=cur->next;
        }
        node* x=cur->next;
        node* y=x->next;
        delete x;
        cur->next=y;
        if(cur->next==nullptr)
            tail=cur;
    }

};