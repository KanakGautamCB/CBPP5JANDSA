#include <iostream>
using namespace std;

void increment(int* ptr){
    (*ptr)++;
}

int main(){
    int x=76;
    increment(&x);
    cout<<x<<endl;
}