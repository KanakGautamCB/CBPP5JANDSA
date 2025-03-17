#include <iostream>
using namespace std;

int main(){
    // int n;cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    
    // cout<<arr<<" "<<&arr[0]<<endl;

    // int n;cin>>n;
    // char arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>*(arr+i);
    }
    int* ptr=arr;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<ptr[i]<<endl;
    }

    
}