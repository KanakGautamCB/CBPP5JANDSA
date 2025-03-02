#include <iostream>
using namespace std;


int main(){
    int n,k;cin>>n>>k;
    k=(k%n);
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i=0,j=n-k-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    i=n-k;
    j=n-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    i=0;
    j=n-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}