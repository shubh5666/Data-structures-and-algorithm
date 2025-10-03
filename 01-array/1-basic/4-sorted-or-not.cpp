#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] =  { 1,2,1,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool found = false;

    for(int i =1;i<n;i++){
        if(arr[i]>arr[i-1]){
            cout<<"Sorted ";
            found = true;
            break;
        }
        
        }
            if(!found){
                cout<<" not Sorted ";
            }
    
}