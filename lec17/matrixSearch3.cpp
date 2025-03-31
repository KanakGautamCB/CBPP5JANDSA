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

    int i=0,j=m-1;
    bool ans=false;
    while(i>=0 && i<n && j>=0 && j<m ){
        if(arr[i][j]>t){
            j--;
        }else if(arr[i][j]<t){
            i++;
        }else{
            ans=true;
            break;
        }
    }
    if(ans){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }

}