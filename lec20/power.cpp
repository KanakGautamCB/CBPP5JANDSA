#include <iostream>
using namespace std;

int power(int x, int y){

    cout<<"x: "<<x<<" y: "<<y<<endl;
    if(y==0){
        return 1;
    }
    int ans=x*power(x,y-1);
    return ans;

}

int main(){
    cout<<power(3,4)<<endl;
}