#include<bits/stdc++.h>
using namespace std;
int t[1001][1001];
int solve(int arr[],int i,int j){
    if(i>=j){
        return 0;
    }
    if(t[i][j]!= -1){
        return t[i][j];
    }
    int mn = INT_MAX;
   for(int k=i;k<=j-1;k++){
    int temp = solve(arr,i,k) + solve(arr,k+1,j)+arr[i-1] * arr[k] * arr[j];
      if(temp<mn){
        mn=temp;
      }
   } 
   return t[i][j] = mn;
}

 int main(){
    memset(t,-1,sizeof(t));
    int arr[] = {10,20,30,10,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i =1,j=n-1;
    cout<<solve(arr,i,j)<<endl;
 }