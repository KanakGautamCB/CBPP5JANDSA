#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx1=INT_MIN,mx2=INT_MIN,mx3=INT_MIN;
    int mn1=INT_MAX,mn2=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>=mx1){
            mx3=mx2;
            mx2=mx1;
            mx1=arr[i];
        }else if(arr[i]>=mx2){
            mx3=mx2;
            mx2=arr[i];
        }else if(arr[i]>mx3){
            mx3=arr[i];
        }

        if(arr[i]<=mn1){
            mn2=mn1;
            mn1=arr[i];
        }else if(arr[i]<mn2){
            mn2=arr[i];
        }

    }

    int s1=mx1*mx2*mx3;
    int s2=mx1*mn1*mn2;

    cout<<max(s1,s2)<<endl;

}