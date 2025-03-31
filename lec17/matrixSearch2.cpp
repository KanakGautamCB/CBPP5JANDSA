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
    for(int i=0;i<n && ans==false;i++){
        int l=0,r=m-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(arr[i][mid]>t){
                r=mid-1;
            }else if(arr[i][mid]<t){
                l=mid+1;
            }else{
                ans=true;
                break;
            }
        }
    }
    if(ans){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl; 
    }

}