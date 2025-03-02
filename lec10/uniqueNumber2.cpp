#include <iostream>
using namespace std;


int main(){
    int n; cin>>n;
    int arr[2*n+2];
    for(int i=0;i<2*n+2;i++){
        cin>>arr[i];
    }
    int x=0;
    for(int i=0;i<2*n+2;i++){
        x^=arr[i];
    }
    int cnt=0;
    while((x&1)==0){
        x>>=1;
        cnt++;
    }
    int x1=0,x2=0;
    for(int i=0;i<2*n+2;i++){
        if((arr[i]>>cnt)&1){
            x1^=arr[i];
        }else{
            x2^=arr[i];
        }
    }

    cout<<x1<<" "<<x2<<endl;

}