#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int a=0,b=1;
    int c;
    if(n==0){
        cout<<0<<endl;
    }else if(n==1){
        cout<<1<<endl;
    }else{
        for(int i=2;i<=n;i++){
            c=a+b; // ith place 
            a=b;
            b=c;
        }
        cout<<c<<endl;
    }
    
}