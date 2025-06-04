#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n;cin>>n;
    priority_queue<int, vector<int>, greater<int>>mnheap;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mnheap.push(x);
    }

    int ans=0;
    while(mnheap.size()>1){
        int x=mnheap.top();
        mnheap.pop();
        int y=mnheap.top();
        mnheap.pop();

        ans+=(x+y);

        mnheap.push(x+y);
    }

    cout<<ans<<endl;

    
}

