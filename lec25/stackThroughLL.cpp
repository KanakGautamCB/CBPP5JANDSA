#include <iostream>
using namespace std;

class node{
public:
    int data;
    node *next,*prev;

    node(int val){
        this->data=val;
        this->next=nullptr;
        this->prev=nullptr;
    }

    node(int val,node* next,node* prev){
        this->data=val;
        this->next=next;
        this->prev=prev;
    }
};

class stak{

public:

    node* head;
    node* tail;
    int size;

    stak(){
        head=new node(0);
        tail=head;
        size=0; 
    }

    void push(int val){
        //cout<<val<<endl;
        node* z= new node(val);
        tail->next=z;
        z->prev=tail;
        tail=tail->next;
        size++;
    }

    void pop(){
        node* nt = tail->prev;
        delete tail;
        nt->next=nullptr;
        tail=nt;
        size--;
    }

    int top(){
        return tail->data;
    }

    int length(){
        return size;
    }

    bool empty(){
        return size==0;
    }

};


int main(){

    //cout<<"test"<<endl;

    stak st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<"top"<<st.top()<<endl;

    st.pop();

    cout<<st.top()<<endl;
    cout<<st.length()<<endl;





}