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

    void insertAtHead(node* n){
        n->next=head;
        head=n;
    }

    void insertAtTail(node* t){
        tail->next=t;
        t->next=nullptr;
        tail=t;
    }

    void insertInBetween(node* n, int pos){
        node* cur=head;
        pos-=1;
        while(--pos){
            cur=cur->next;
        }
        node* n2=cur->next;
        cur->next=n;
        n->next=n2;
        
    }

};

int main(){
    
    // 1
    node* n = new node(1);

    list l1 = list(n);

    node* n1=new node(2);

    //2 -> 1
    l1.insertAtHead(n1);

    node* n2= new node(4);
    
    //2 -> 1 -> 4
    l1.insertAtTail(n2);

    node* n3 = new node(7);

    // 2->7->1->4
    l1.insertInBetween(n3,2);


    node* cur= l1.head;

    while(cur!=nullptr){
        cout<<cur->val<<endl;
        cur=cur->next;
    }




}