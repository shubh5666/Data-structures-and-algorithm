#include<bits/stdc++.h>
using namespace std;
    int MCM(int arr[],int i,int j){
        if(i>=j){
            return  0;
    }


       int mn = INT_MAX;
         for(int k=i;k<=j-1;k++){
             int temp = MCM(arr,i,k) + MCM(arr,k+1,j)+arr[i-1] * arr[k] * arr[j];
                 if(temp<mn){
                       mn=temp;
      }
   } 
   return mn;
}

 int main(){
    int arr[] = {10,20,30,10,20};
      int n = sizeof(arr)/sizeof(arr[0]);
         int i =1,j=n-1;
             cout<<MCM(arr,i,j)<<endl;
 }