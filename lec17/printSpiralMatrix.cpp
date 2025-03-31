#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int s1=0,s2=0,e1=n-1,e2=m-1;
    while(s1<=e1 && s2<=e2){
        for(int j=s2;j<=e2;j++){
            cout<<arr[s1][j]<<" ";
        }
        for(int i=s1+1;i<=e1;i++){
            cout<<arr[i][e2]<<" ";
        }
        for(int j=e2-1;j>=s2;j--){
            cout<<arr[e1][j]<<" ";
        }
        for(int i=e1-1;i>s1;i--){
            cout<<arr[i][s2]<<" ";
        }
        s1++;
        s2++;
        e1--;
        e2--;
    }
}