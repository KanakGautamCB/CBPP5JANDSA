#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    int total=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        total+=arr[i];
    }
    int sum=0,ans1=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        ans1=max(ans1,sum);
        if(sum<0){
            sum=0;
        }
    }
    int sum1=0,ans2=0;
    for(int i=0;i<n;i++){
        sum1+=arr[i];
        ans2=min(sum1,ans2);
        if(sum1>0){
            sum1=0;
        }
    }
    if(total-ans2==0){
        cout<<ans1<<endl;
    }else{
        cout<<max(ans1,total-ans2)<<endl;
    }
    


}