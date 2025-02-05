#include <iostream>
using namespace std;

int main(){
    char c='.';
    int lc=0,uc=0,wc=0,sc=0,dc=0;

    while(c!='$'){
        c=cin.get();
        if(c>='a' && c<='z'){
            lc++;
        }else if(c>='A' && c<='Z'){
            uc++;
        }else if(c>='0' && c<='9'){
            dc++;
        }else if(c==' ' || c=='\t' || c=='\n'){
            wc++;
        }else{
            sc++;
        }
    }
    cout<<"lowercase "<<lc<<endl;
    cout<<"uppercase "<<uc<<endl;
    cout<<"whitespace "<<wc<<endl;
    cout<<"digit "<<dc<<endl;
    cout<<"special "<<lc<<endl;
}