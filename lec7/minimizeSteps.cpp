#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int vc=0,hc=0;
    for(int i=0;i<n;i++){
        char c;
        cin>>c;
        if(c=='N'){
            vc++;
        }else if(c=='S'){
            vc--;
        }else if(c=='W'){
            hc--;
        }else if(c=='E'){
            hc++;
        }
    }
    if(vc>0){
        for(int i=0;i<vc;i++){
            cout<<'N';
        }
    }else if(vc<0){
        vc*=-1;
        for(int i=0;i<vc;i++){
            cout<<'S';
        }
    }
    if(hc>0){
        for(int i=0;i<hc;i++){
            cout<<'E';
        }
    }else if(hc<0){
        hc*=-1;
        for(int i=0;i<hc;i++){
            cout<<'W';
        }
    }
}