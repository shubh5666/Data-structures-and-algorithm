#include<bits/stdc++.h>
using namespace std;  // can include multiple time occurence
int unboundedKnapsack(int val[],int wt[],int W,int n){
  int t[n+1][W+1];
  for(int i=0;i<n+1;i++){
    for(int j=0;j<W+1;j++){
      if(i==0 || j==0){
        t[i][j] = 0;
      }
    }
  }

  for(int i=1;i<n+1;i++){
    for(int j=1;j<W+1;j++){
      if(wt[i-1]<=j){
        t[i][j] = max( val[i-1] + t[i][j-wt[i-1]],
                       t[i-1][j]);
      }else{
      t[i][j] = t[i-1][j];
      }
    }
  }

return t[n][W];
}





int main(){

  int val[]={3,5,1,8};
  int wt[] = {10,15,20,40};
  int W = 30;
  
  int n =sizeof(wt)/sizeof(wt[0]);
  cout<<unboundedKnapsack(val,wt,W,n);

}
  
  

