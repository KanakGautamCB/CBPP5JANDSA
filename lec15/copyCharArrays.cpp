#include <iostream>
using namespace std;


int main(){
    int n;cin>>n;
    char s1[n+1];
    cin>>s1;
    int m;cin>>m;
    char s2[m+1];
    cin>>s2;

    int i=0;
    while(s2[i]!='\0'){
        s1[i]=s2[i];
        i++;
    }
    s1[i]='\0';
    cout<<s1<<endl;

}