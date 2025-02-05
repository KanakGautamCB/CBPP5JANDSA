#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // for(int i=2;i<=n;i=i+1){
    //     if(i%2){
    //         cout<<" Odd number h toh niche nhi jayenge"<<endl;
    //         continue;
    //     }
    //     cout<<i<<endl;
    // }

    // for(int i=n;i<=n+4;i+=1){
    //     if(i%5==0){
    //         break;
    //     }
    //     cout<<i<<endl;
    // }

    for(int i=n;i<=n+10;i+=1){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
}