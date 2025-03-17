#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n;cin>>n;
    int m;cin>>m;
    char arr[m+1];
    cin>>arr;
    for(int i=0;i<n-1;i++){
        int s;cin>>s;
        char str[s+1];
        cin>>str;

        if(strcmp(arr,str)<0){
            strcpy(arr,str);
        }
    }
    cout<<arr;

}