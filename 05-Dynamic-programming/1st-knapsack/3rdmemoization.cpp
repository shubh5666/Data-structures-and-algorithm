#include <bits/stdc++.h>
using namespace std;

int t[100][1001];
int knapsack(int wt[],int val[],int W,int n){
  if(n==0 || W==0){
     return 0;
  }
  if(t[n][W]!= -1){
     return t[n][W];
  }
   if(wt[n-1]<=W){
    t[n][W] =  max(val[n-1] + knapsack(wt,val,W-wt[n-1],n-1),
                  knapsack(wt,val,W,n-1));
   }

   else{
    t[n][W] = knapsack(wt,val,W,n-1);
   }
   return t[n][W];
}

int main(){
  memset(t,-1,sizeof(t));
  int wt[]={1,3,4,5};
  int val[] = {1,4,5,7};
  int W = 7;
  int n = sizeof(wt)/sizeof(wt[0]);
  cout<<knapsack(wt,val,W,n);
}