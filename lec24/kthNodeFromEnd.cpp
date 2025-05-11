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

int kthNodeFromEnd(node* head, int k){

    node* p1=head,*p2=head;
    while(k--){
        p1=p1->next;
    }

    while(p1!=nullptr){
        p1=p1->next;
        p2=p2->next;
    }
    return p2->val;
}

int main(){

}

