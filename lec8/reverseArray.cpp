#include <iostream>
using namespace std;


int main(){
    int n,i,j;
    cin>>n>>i>>j;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

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