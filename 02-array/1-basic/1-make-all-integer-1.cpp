#include<iostream>    // make all the integer equals to 1.
using namespace std;
int main(){
    int arr[5]={2,1,4,6,7};
    for(int i=0;i<5;i++){
        arr[i]=1;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}