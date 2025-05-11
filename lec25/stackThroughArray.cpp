#include <iostream>
using namespace std;

class stack{
    int arr[10];
    int index=0;
    int size=10;

public:
    
    void push(int val){
        if(index<size){
            arr[index]=val;
            index++;
        }
    }

    void pop(){
        index--;
    }

    int top(){
        return arr[index];
    }

    int size(){
        return index+1;
    }
};

int main(){

}