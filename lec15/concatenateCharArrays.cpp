#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int m;cin>>m;
    char s1[n+m+1];
    for(int i=0;i<n;i++){
        cin>>s1[i];
    }
    s1[n]='\0';
    char s2[m+1];
    for(int j=0;j<m;j++){
        cin>>s2[j];
    }
    s2[m]='\0';

    int i=n,j=0;
    while(s2[j]!='\0'){
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
    cout<<s1<<endl;


}