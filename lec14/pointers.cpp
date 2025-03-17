#include <iostream>
using namespace std;

int main(){
    int x=1;
    int* y=&x;
    char c='d';
    char* cptr=&c;
    bool b= false;
    bool* bptr= &b;
    float f=10.90;
    float* fptr=&f;

    cout<<y<<endl;
    cout<<cptr<<" "<<&c<<endl;
    cout<<bptr<<endl;
    cout<<fptr<<endl;
}