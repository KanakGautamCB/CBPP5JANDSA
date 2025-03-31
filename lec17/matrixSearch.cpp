#include <iostream>
using namespace std;

int main(){
    int n,m,t;
    cin>>n>>m>>t;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    bool ans=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==t){
                ans=true;
            }
        }
    }
    if(ans){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
}