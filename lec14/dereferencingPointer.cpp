#include <iostream>
using namespace std;

void fun(int* xptr){
    cout<<*xptr<<endl;
}

void fun1(float* fptr){
    cout<<*fptr<<endl;
}


int main(){
    // int x;
    // int* xptr =&x;
    // fun(xptr);

    // float f=100.78;
    // fun1(&f);

    char c='p';
    char* cptr=&c;
    cout<<&cptr<<endl;

}