#include <iostream>
using namespace std;

int main(){

    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    cout<<*(*arr)<<" "<<*arr[0]<<endl;



}