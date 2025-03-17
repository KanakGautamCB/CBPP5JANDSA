#include <iostream>
using namespace std;

int main(){
    int x=456;
    char* cptr = (char*) &x;
    cout<<*cptr<<endl;

    // int x=190;
    // bool* fptr = (bool*) &x;
    // cout<<fptr<<" "<<&x<<endl;

    // char c='j';
    // int* iptr=(int*) &c;
    // cout<<iptr<<endl;

    // int y=8;
    // float* fptr=(float*) &y;
    // cout<<*fptr<<" "<<y<<endl;
}