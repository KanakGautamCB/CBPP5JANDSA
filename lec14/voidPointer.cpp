#include <iostream>
using namespace std;

void passAll(void* vptr, int sz){
    if(sz==4){
        int* iptr=(int*)vptr;
        cout<<*iptr<<endl;
    }
    if(sz==1){
        char* cptr=(char*)vptr;
        cout<<*cptr<<endl;
    }
    if(sz==8){
        double* dptr=(double*)vptr;
        cout<<*dptr<<endl;
    }
}

int main(){
    int x=1;
    passAll(&x,sizeof(x));

    char c='o';
    passAll(&c,sizeof(c));

    double d=9.087;
    passAll(&d,sizeof(d));

   
}