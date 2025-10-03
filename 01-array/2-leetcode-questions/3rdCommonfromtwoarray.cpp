#include<iostream>
using namespace std;
int main(){
int arr[5]={2,3,4,56,6,};
int arr1[4]={2,6,23,4};
for(int i=0;i<5;i++){
    for(int j=0;j<4;j++){
        if(arr[i]==arr1[j]){
         cout<<arr[i]<<" ";
         arr[i]=-1;
         break;
        }
    }
}



cout<<endl;
}