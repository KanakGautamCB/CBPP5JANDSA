#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    char arr[n+1];
    cin>>arr;
    int i=0,j=n-1;
    while(arr[i]==arr[j] && i<=j){
        i++;
        j--;
    }

    if(i>j){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }

}