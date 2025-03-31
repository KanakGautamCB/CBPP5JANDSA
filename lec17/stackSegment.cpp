#include <iostream>
using namespace std;

int* f(){
    int* ptr= new int;
    *ptr=10;
    return ptr;
}

int main(){

    // int* xptr=f();
    // cout<<*xptr<<endl;
    // delete xptr;

    int* ptr = new int[]{10,20,30,40};

    cout<<ptr[4]<<endl;
    
}