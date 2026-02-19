#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,6,2,8,4,9,1,7,0,5};
      int N = sizeof(arr) / sizeof(arr[0]);
   int l=0,h=N-1;
    for(int i=0;i<N;i++){
        if(arr[i]>arr[i+1] && arr[i]<arr[i-1]){
            cout<<arr[i];
        }
    }
}