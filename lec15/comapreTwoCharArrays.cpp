#include <iostream>
#include <cstring>
using namespace std;

int comp(char* s1, char* s2){
    int i=0;
    while(s1[i]!='\0' && s2[i]!='\0'){
        if(s1[i]>s2[i]){
            return 1;
        }else if(s1[i]<s2[i]){
            return -1;
        }else{
            i++;
        }
    }

    if(s1[i]=='\0' && s2[i]=='\0'){
        return 0;
    }else if(s1[i]=='\0'){
        return -1;
    }else{
        return 1;
    }
}

int main(){
    int n;cin>>n;
    char arr1[n+1];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    arr1[n]='\0';
    int m;cin>>m;
    char arr2[m+1];
    for(int j=0;j<m;j++){
        cin>>arr2[j];
    }
    arr2[m]='\0';
    cout<<comp(arr1, arr2)<<endl;

}
